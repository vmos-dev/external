#ifndef _DETHREADSAFERINGBUFFER_HPP
#define _DETHREADSAFERINGBUFFER_HPP
/*-------------------------------------------------------------------------
 * drawElements C++ Base Library
 * -----------------------------
 *
 * Copyright 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *//*!
 * \file
 * \brief Thread-safe ring buffer template.
 *//*--------------------------------------------------------------------*/

#include "deDefs.hpp"
#include "deMutex.hpp"
#include "deSemaphore.hpp"

namespace de
{

void ThreadSafeRingBuffer_selfTest (void);

/** Thread-safe ring buffer template. */
template <typename T>
class ThreadSafeRingBuffer
{
public:
				ThreadSafeRingBuffer	(int size);
				~ThreadSafeRingBuffer	(void) {}

	void		pushFront				(const T& elem);
	bool		tryPushFront			(const T& elem);
	T			popBack					(void);
	bool		tryPopBack				(T& dst);

protected:
	void		pushFrontInternal		(const T& elem);
	T			popBackInternal			(void);

	int			m_front;
	int			m_back;
	T*			m_buffer;
	int			m_size;

	Mutex		m_writeMutex;
	Mutex		m_readMutex;

	Semaphore	m_fill;
	Semaphore	m_empty;
};

// ThreadSafeRingBuffer implementation.

template <typename T>
ThreadSafeRingBuffer<T>::ThreadSafeRingBuffer (int size)
	: m_front		(0)
	, m_back		(0)
	, m_size		(size+1)
	, m_fill		(0)
	, m_empty		(size)
{
	DE_ASSERT(size > 0);
	m_buffer = new T[m_size];
}

template <typename T>
inline void ThreadSafeRingBuffer<T>::pushFrontInternal (const T& elem)
{
	m_buffer[m_front] = elem;
	m_front = (m_front + 1) % m_size;
}

template <typename T>
inline T ThreadSafeRingBuffer<T>::popBackInternal ()
{
	int ndx = m_back;
	m_back = (m_back + 1) % m_size;
	return m_buffer[ndx];
}

template <typename T>
void ThreadSafeRingBuffer<T>::pushFront (const T& elem)
{
	m_writeMutex.lock();
	m_empty.decrement();
	pushFrontInternal(elem);
	m_fill.increment();
	m_writeMutex.unlock();
}

template <typename T>
bool ThreadSafeRingBuffer<T>::tryPushFront (const T& elem)
{
	if (!m_writeMutex.tryLock())
		return false;
	bool success = m_empty.tryDecrement();
	if (success)
	{
		pushFrontInternal(elem);
		m_fill.increment();
	}
	m_writeMutex.unlock();
	return success;
}

template <typename T>
T ThreadSafeRingBuffer<T>::popBack ()
{
	m_readMutex.lock();
	m_fill.decrement();
	T elem = popBackInternal();
	m_empty.increment();
	m_readMutex.unlock();
	return elem;
}

template <typename T>
bool ThreadSafeRingBuffer<T>::tryPopBack (T& dst)
{
	if (!m_readMutex.tryLock())
		return false;
	
	bool success = m_fill.tryDecrement();
	
	if (success)
	{
		dst = popBackInternal();
		m_empty.increment();
	}
	
	m_readMutex.unlock();
	
	return success;
}

} // de

#endif // _DETHREADSAFERINGBUFFER_HPP

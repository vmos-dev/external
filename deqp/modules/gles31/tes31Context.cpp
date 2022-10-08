/*-------------------------------------------------------------------------
 * drawElements Quality Program OpenGL ES 3.1 Module
 * -------------------------------------------------
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
 * \brief OpenGL ES 3.1 test context.
 *//*--------------------------------------------------------------------*/

#include "tes31Context.hpp"
#include "gluRenderContext.hpp"
#include "gluRenderConfig.hpp"
#include "gluFboRenderContext.hpp"
#include "gluES3PlusWrapperContext.hpp"
#include "gluContextInfo.hpp"
#include "gluDummyRenderContext.hpp"
#include "tcuCommandLine.hpp"

namespace deqp
{
namespace gles31
{

Context::Context (tcu::TestContext& testCtx)
	: m_testCtx		(testCtx)
	, m_renderCtx	(DE_NULL)
	, m_contextInfo	(DE_NULL)
{
	if (m_testCtx.getCommandLine().getRunMode() == tcu::RUNMODE_EXECUTE)
		createRenderContext();
	else
		m_renderCtx = new glu::DummyRenderContext();
}

Context::~Context (void)
{
	destroyRenderContext();
}

void Context::createRenderContext (void)
{
	DE_ASSERT(!m_renderCtx && !m_contextInfo);

	try
	{
		m_renderCtx		= glu::createDefaultRenderContext(m_testCtx.getPlatform(), m_testCtx.getCommandLine(), glu::ApiType::es(3,1));
		m_contextInfo	= glu::ContextInfo::create(*m_renderCtx);
	}
	catch (...)
	{
		destroyRenderContext();
		throw;
	}
}

void Context::destroyRenderContext (void)
{
	delete m_contextInfo;
	delete m_renderCtx;

	m_contextInfo	= DE_NULL;
	m_renderCtx		= DE_NULL;
}

const tcu::RenderTarget& Context::getRenderTarget (void) const
{
	return m_renderCtx->getRenderTarget();
}

} // gles31
} // deqp

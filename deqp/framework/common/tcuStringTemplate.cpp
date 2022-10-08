/*-------------------------------------------------------------------------
 * drawElements Quality Program Tester Core
 * ----------------------------------------
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
 * \brief String template class.
 *//*--------------------------------------------------------------------*/

#include "tcuStringTemplate.hpp"
#include "tcuDefs.hpp"

#include <sstream>

using std::string;
using std::map;
using std::ostringstream;

namespace tcu
{

StringTemplate::StringTemplate (void)
{
}

StringTemplate::StringTemplate (const std::string& str)
{
	setString(str);
}

StringTemplate::~StringTemplate (void)
{
}

void StringTemplate::setString (const std::string& str)
{
	m_template = str;
}

string StringTemplate::specialize (const map<string, string>& params) const
{
	ostringstream res;

	size_t curNdx = 0;
	for (;;)
	{
		size_t paramNdx = m_template.find("${", curNdx);
		if (paramNdx != string::npos)
		{
			// Append in-between stuff.
			res << m_template.substr(curNdx, paramNdx - curNdx);

			// Find end-of-param.
			size_t paramEndNdx = m_template.find("}", paramNdx);
			if (paramEndNdx == string::npos)
				throw tcu::InternalError("No '}' found in template parameter", "", __FILE__, __LINE__);

			// Parse parameter contents.
			string	paramStr		= m_template.substr(paramNdx+2, paramEndNdx-2-paramNdx);
			bool	paramSingleLine	= false;
			string	paramName;
			size_t colonNdx = paramStr.find(":");
			if (colonNdx != string::npos)
			{
				paramName = paramStr.substr(0, colonNdx);
				string flagsStr = paramStr.substr(colonNdx+1);
				TCU_CHECK(flagsStr == "single-line");
				paramSingleLine = true;
			}
			else
				paramName = paramStr;

			// Fill in parameter value.
			if (params.find(paramName) != params.end())
			{
				const string& val = (*params.find(paramName)).second;
				if (paramSingleLine)
				{
					string tmp = val;
					for (size_t ndx = tmp.find("\n"); ndx != string::npos; ndx = tmp.find("\n"))
						tmp = tmp.replace(ndx, 1, " ");
					res << tmp;
				}
				else
					res << val;
			}
			else
				throw tcu::InternalError((string("Value for parameter '") + paramName + "' not found in map").c_str(), "", __FILE__, __LINE__);

			// Skip over template.
			curNdx = paramEndNdx + 1;
		}
		else
		{
			if (curNdx < m_template.length())
				res << &m_template[curNdx];

			break;
		}
	}

	return res.str();
}

} // tcu

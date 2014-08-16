// OpenCppCoverage is an open source code coverage for C++.
// Copyright (C) 2014 OpenCppCoverage
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "stdafx.h"

#include "CppCoverage/CppCoverageException.hpp"

namespace cov = CppCoverage;

namespace CppCoverageTest
{
	
	//-------------------------------------------------------------------------
	TEST(CppCoverageException, GetErrorMessage)
	{
		ASSERT_NE(L"", cov::GetErrorMessage(1));
	}

	//-------------------------------------------------------------------------
	TEST(CppCoverageException, GetErrorMessageInvalid)
	{
		ASSERT_NE(L"", cov::GetErrorMessage(-1));
	}
}
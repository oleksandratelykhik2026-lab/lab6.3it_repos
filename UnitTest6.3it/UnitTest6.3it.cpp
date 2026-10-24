#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3it/lab6.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestTemplateFunction)
		{
			int a[] = { -5, 8, -2, 0, 7, -1 };
			Assert::AreEqual(3, CountNegative<int>(a, 6));
		}

		TEST_METHOD(TestNoNegativeElements)
		{
			int a[] = { 1, 2, 0, 4 };
			Assert::AreEqual(0, CountNegative(a, 4));
		}
	};
}

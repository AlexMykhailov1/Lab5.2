#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.2/Lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = A(2, 2, 0);
			Assert::AreEqual(t, 0);

		}
	};
}

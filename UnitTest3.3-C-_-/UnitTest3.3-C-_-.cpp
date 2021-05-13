#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3-C/Object.h"
#include "../Lab_3.3-C/Object.cpp"
#include "../Lab_3.3-C/BitString.h"
#include "../Lab_3.3-C/BitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BitString a, b;
			a.SetFirst(4);
			a.SetSecond(4);

			b.SetFirst(8);
			b.SetSecond(8);

			BitString c = (a ^ b);
			Assert::AreEqual(c.GetFirst(), 12l);
			Assert::AreEqual(c.GetSecond(), 12l);
		}
	};
}

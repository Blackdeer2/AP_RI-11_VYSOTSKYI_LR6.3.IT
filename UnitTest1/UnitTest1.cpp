#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.3.IT/PR6.3.IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[10] = { 35,12,41,35,-11,-8,-3,22,13,-18 };
			int t = Suma_v2(arr, 10);
			Assert::AreEqual(t, 5446);

		}
	};
}

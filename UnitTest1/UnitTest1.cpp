#include "pch.h" 
#include "CppUnitTest.h" 
#include "C:\Users\LEGION\source\repos\Lab_6.21\Lab_6.21\Source.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 10;
			int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			t = Sum(a, n);
			Assert::AreEqual(30, t);
		}
	};
}

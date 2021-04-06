#include "pch.h"
#include "CppUnitTest.h"

#include "../lab1.6/lab1.6.cpp"
#include "../lab1.6/SolutionC.h"

#include "../lab1.6/SolutionC.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			
			SolutionC b;
			b.setAmount(1500);

			Assert::AreEqual(1500, b.getAmount());
		}
	};
}

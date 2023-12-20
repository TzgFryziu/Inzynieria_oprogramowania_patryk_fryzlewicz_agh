#include "pch.h"
#include "CppUnitTest.h"
#include "../kalkulator/funkcje.cpp"
#include <cmath>
#include<vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(logarytm_naturalny_test)
	{
	public:
		
		TEST_METHOD(ln1)
		{
			float expected = 0;
			float result = logarytm_naturalny(1);

			Assert::AreEqual(expected, result);
		}

	};

	TEST_CLASS(exp_test)
	{
	public:

		TEST_METHOD(exp3)
		{
			float expected = 20.0855;
			float result = floor(exponent(3)*10000)/10000;

			Assert::AreEqual(expected, result);
		}

	};

	TEST_CLASS(odchylenie_standardowe_test)
	{
	public:

		TEST_METHOD(odchylenie_standardowe_1_2_3_4_5)
		{
			std::vector<float> test_arr({ 1, 2, 3, 4, 5 });
			float expected = 1.4142;
			float result = floor(odchylenie_standardowe(test_arr) * 10000) / 10000;

			Assert::AreEqual(expected, result);
		}

	};

	TEST_CLASS(funkcja_dodatkowa)
	{
	public:

		TEST_METHOD(funkcja_dodatkowa_4)
		{
			int expected = 17;
			int result = fun(4);

			Assert::AreEqual(expected, result);
		}

	};


}

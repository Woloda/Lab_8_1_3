#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1(3)/Lab_8.1(3).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab813
{
	TEST_CLASS(UnitTestLab813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char lit_r[50] = "QhkiQQSuySQQsdQSdsSQsdQQQSSSq";
			char para[] = "SQ";
			char para1[] = "QS";
			char zamina[] = "***";

			perevirka(lit_r, para, para1, zamina);
			Assert::AreEqual(lit_r[5], '*');
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		int findMax(const int arr[], int size) {
			int max = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] > max) {
					max = arr[i];
				}
			}
			return max;
		}

		TEST_METHOD(TestMethod1)
		{
			int arr1[] = { 1, 2, 3, 4, 5 };
			int size1 = sizeof(arr1) / sizeof(arr1[0]);
			Assert::AreEqual(findMax(arr1, size1), 5);
		}
	};
}

// 326.PowerofThree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Solution
{
public:
	bool isPowerOfThree(int n)
	{
		if (n <= 0)
		{
			return false;
		}

		if (n == 1)
		{
			return true;
		}

		unsigned int checkThree = 3;

		while (checkThree <= n)
		{
			if (checkThree == n)
			{
				return true;
			}
			else
			{
				checkThree = checkThree * 3;
				cout << checkThree << endl;
			}
		}

		return false;
	}
};

//다른해답
//class Solution
//{
//public:
//	bool isPowerOfThree(int n)
//	{
//		while (n > 0 && n % 3 == 0)
//		{
//			n = n / 3;
//			cout << n << endl;
//		}
//		if (n == 1)
//			return true;
//		else
//			return false;
//
//
//	}
//};

int main()
{
	Solution s;
	cout << s.isPowerOfThree(45) << endl;
}

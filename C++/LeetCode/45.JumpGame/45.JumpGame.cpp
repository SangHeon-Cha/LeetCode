// 45.JumpGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//https://leetcode.com/problems/jump-game-ii/description/
//문제를 잘못이해해서 엄청나게 삽질함.
// greedy algorithm쓰는거같은데 해당 알고리즘을 잘 몰라서 그냥 쭉 풀었음.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int jump(vector<int>& nums)
	{
		int currentIndex = 0;
		int curJumpLength = nums[0];
		int minimumResult = 0;

		int numsCount = nums.size();

		if (numsCount <= 1)
		{
			return 0;
		}


		for (int i = 0; i < numsCount; i++)
		{
			minimumResult++;


			int nextLanding = currentIndex + curJumpLength;

			if (nextLanding >= numsCount - 1)
			{
				break;
			}

			int nextIndex = 0;
			int nextJumpLength = 0;
			int expectedValue = 0;

			for (int j = currentIndex + 1; j <= (currentIndex + curJumpLength); j++)
			{
				if (nums[j] == 0)
				{
					continue;
				}

				int tempExpectedValue = j + nums[j];
				if (expectedValue <= tempExpectedValue)
				{
					expectedValue = tempExpectedValue;
					nextJumpLength = nums[j];
					nextIndex = j;
				}

				//if (nums[j] == (nums.size() - 1) - j)
				//{
				//	nextJumpLength = nums[j];
				//	nextIndex = j;
				//	break;
				//}
			}

			currentIndex = nextIndex;
			curJumpLength = nextJumpLength;
		}

		return minimumResult;
	}
};


int main()
{
	//vector<int> testValue = { 1, 2 };
	//vector<int> testValue = { 1, 2,3 };
	//vector<int> testValue = { 2,3,1,1,4 };
	//vector<int> testValue = { 3,4,3,2,5,4,3 };
	//vector<int> testValue = { 1,1,1,1,1 };
	//vector<int> testValue = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 0 };
	//vector<int> testValue = { 9,7,9,4,8,1,6,1,5,6,2,1,7,9,0 };
	vector<int> testValue = { 5,9,3,2,1,0,2,3,3,1,0,0 };


	Solution s;

	cout << s.jump(testValue) << endl;

	cin.get();
}

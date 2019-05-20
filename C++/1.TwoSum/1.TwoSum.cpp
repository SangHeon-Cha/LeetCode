// 1.TwoSum.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;


class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		bool isFind = false;
		int size = nums.size();

		vector<int> solv;

		while (!isFind)
		{
			for (int i = 0; i < size; i++)
			{
				int firstNum = nums[i];
				int findNum = target - firstNum;

				auto result = find(nums.begin() + i + 1, nums.end(), findNum);

				if (result != nums.end())
				{
					size_t subIndex = result - nums.begin();

					solv.push_back(i);
					solv.push_back(subIndex);

					isFind = true;
				}

				if (isFind)
				{
					break;
				}
			}
		}

		return solv;
	}
};

int main()
{
	vector<int> numList = { 3,2,4 };

	Solution s;

	vector<int> result = s.twoSum(numList, 6);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

	int bcd;

	cin >> bcd;

	return 0;
}

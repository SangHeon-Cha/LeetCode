// 295.FindMedianfromDataStream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//https://leetcode.com/problems/find-median-from-data-stream/description/
/*
풀긴 풀었는데 만족스럽진않다. lower_bound못찾았으면 sort()때문에 Time이 너무 걸려서 못풀었을것.

set, multiset, priority_queue등 알았으면 좀더쉽게 풀었을것...

*/

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MedianFinder
{
private:
	vector<int> numList;

public:
	/** initialize your data structure here. */
	MedianFinder()
	{

	}

	void addNum(int num)
	{
		auto it = lower_bound(numList.begin(), numList.end(), num);
		numList.insert(it, num);
	}

	double findMedian()
	{
		double result = 0;
		int listSize = numList.size();
		int medianIndex = listSize / 2;

		if (listSize == 0)
		{
			result = 0;
		}
		else if (listSize == 1)
		{
			result = numList[0];
		}
		else if (listSize % 2 == 1)	//홀수일 경우
		{
			result = numList[medianIndex];
		}
		else if (listSize % 2 == 0)	//짝수일 경우
		{
			result = ((double)numList[medianIndex - 1] + (double)numList[medianIndex]) / 2;
		}

		return result;
	}
};


int main()
{
	MedianFinder s;
	s.addNum(2);
	//s.addNum(4);
	s.addNum(3);

	cout << s.findMedian() << endl;

	cin.get();
}

// 836RectangleOverlap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//https://leetcode.com/problems/rectangle-overlap/description/

/*
NOTE:
	다시한번 풀어보고 생각해야함..

*/



#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2)
	{
		if (rec1[2] <= rec2[0]) return false;
		if (rec1[3] <= rec2[1]) return false;
		if (rec1[0] >= rec2[2]) return false;
		if (rec1[1] >= rec2[3]) return false;

		return true;
	}
};

//
//class Solution
//{
//public:
//	bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2)
//	{
//		if (rec1[0] < rec2[0] && rec2[0] < rec1[2])
//		{
//			if (rec1[1] < rec2[1] && rec2[1] < rec1[3])
//			{
//				return true;
//			}
//		}
//		
//		if (rec1[0] < rec2[2] && rec2[2] < rec1[2])
//		{
//			if (rec1[1] < rec2[3] && rec2[3] < rec1[3])
//			{
//				return true;
//			}
//		}
//
//		if (rec1[0] <= rec2[0] && rec2[0] <= rec1[2])
//		{
//			if (rec1[0] <= rec2[2] && rec2[2] <= rec1[2])
//			{
//				if (rec1[1] <= rec2[1] && rec2[1] < rec1[3])
//				{
//					return true;
//				}
//
//				if (rec1[1] < rec2[1] && rec2[1] <= rec1[3])
//				{
//					return true;
//				}
//			}
//		}
//
//		if (rec1[1] <= rec2[1] && rec2[1] <= rec1[3])
//		{
//			if (rec1[1] <= rec2[3] && rec2[3] <= rec1[3])
//			{
//				if (rec1[0] <= rec2[0] && rec2[0] < rec1[2])
//				{
//					return true;
//				}
//				if (rec1[0] < rec2[0] && rec2[0] <= rec1[2])
//				{
//					return true;
//				}
//			}
//		}
//
//		return false;
//	}
//};


int main()
{
	vector<int> rec1 = { 2,17,6,20 };
	vector<int> rec2 = { 3,8,6,20 };


	Solution *s;
	s = new Solution;

	cout << s->isRectangleOverlap(rec1, rec2) << endl;


}
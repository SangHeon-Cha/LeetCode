// 744. FindSmallestLetter.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
//https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

/*
TODO:
문제를 잘못읽어서 쓸데없이 긴부분이 있음. 나중에 수정.
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	char nextGreatestLetter(vector<char>& letters, char target)
	{
		char result = NULL;
		int smallestLetterIndex = 0;
		int resultLetterIndex = 0;
		int targetGap = INT32_MAX;

		int arraySize = letters.size();
		for (int i = 0; i < arraySize; i++)
		{
			int curASCII = letters[i];

			if ((int)letters[smallestLetterIndex] > curASCII)
			{
				smallestLetterIndex = i;
				//cout << "SmallestLetterIndex = " << smallestLetterIndex << " Value = " << letters[smallestLetterIndex] << endl;
			}

			if (curASCII > (int)target)
			{
				int temp = curASCII - target;

				//cout << "curASCII = " << curASCII << " target : " << (int)target << " Gap : " << temp << endl;

				if (temp < targetGap)
				{
					//cout << "targetGap Change. Current targetGap : " << targetGap << " Change targetGap : " << temp << endl;
					targetGap = temp;
					resultLetterIndex = i;
				}
			}
		}

		if (targetGap == INT32_MAX)
		{
			result = letters[smallestLetterIndex];
		}
		else
		{
			result = letters[resultLetterIndex];
		}
		
		return result;
	}
};



int main()
{
	//vector<char> problemArray = { 'a', 'b', 'c', 'd','e', 'f', 'g', 'h','i', 'j', 'k', 'l','m', 'n', 'o', 'p','q', 'r', 's', 't','u', 'v', 'w', 'x','y', 'z' };
	vector<char> problemArray = { 'j','f','c' };
	int arraySize = problemArray.size();

	Solution s;

	char result = s.nextGreatestLetter(problemArray, 'k');

	cout << result << endl;


	cin.get();
	return 0;
}


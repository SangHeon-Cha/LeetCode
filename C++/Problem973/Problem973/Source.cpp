/*
https://leetcode.com/problems/k-closest-points-to-origin/


결과 : https://leetcode.com/submissions/detail/256906700/
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//초등학생도 이렇게 안짤듯
//
//class Solution
//{
//public:
//	vector<vector<int>> kClosest(vector<vector<int>>& points, int K)
//	{
//		vector<vector<int>> result;
//		vector<vector<int>> result2;
//
//		result2.reserve(K);
//
//		for (vector<vector<int>>::iterator iter = points.begin(); iter != points.end(); iter++)
//		{
//			int x = iter[0][0];
//			int y = iter[0][1];
//
//			int distance = (x*x) + (y*y);
//
//			bool isBreak = false;
//
//			if (result.size() == 0)
//			{
//				result.push_back(iter[0]);
//			}
//			else
//			{
//				for (vector<vector<int>>::iterator iter2 = result.begin(); iter2 != result.end(); iter2++)
//				{
//					int x2 = iter2[0][0];
//					int y2 = iter2[0][1];
//
//					int distance2 = (x2*x2) + (y2*y2);
//
//
//					if (distance < distance2)
//					{
//						result.insert(iter2, iter[0]);
//						isBreak = true;
//						break;
//					}
//				}
//
//				if (isBreak != true)
//				{
//					result.push_back(iter[0]);
//					isBreak = false;
//				}
//			}
//
//			//for (vector<vector<int>>::iterator iter = result.begin(); iter != result.end(); iter++)
//			//{
//			//	cout.width(2);
//			//	cout << iter[0][0];
//			//	cout << ",";
//			//	cout.width(2);
//			//	cout << iter[0][1] << endl;
//			//}
//
//			//cout << "----------------" << endl;
//
//		}
//
//
//		vector<vector<int>>::iterator iter = result.begin();
//
//		for (int i = 0; i < K; i++)
//		{
//			result2.push_back(iter[0]);
//			iter++;
//
//		}
//
//		return result2;
//	}
//};

bool comparison_function(const vector<int>& v1, const vector<int>& v2)
{
	return v1[0] < v2[0];
}


class Solution
{
public:
	vector<vector<int>> kClosest(vector<vector<int>>& points, int K)
	{
		vector<vector<int>> tempResult;
		vector<vector<int>> result;

		for (vector<vector<int>>::iterator iter = points.begin(); iter != points.end(); iter++)
		{
			int x = iter[0][0];
			int y = iter[0][1];

			int distance = (x * x) + (y * y);

			vector<int> temp;
			temp.push_back(distance);
			temp.push_back(x);
			temp.push_back(y);

			tempResult.push_back(temp);
		}

		sort(tempResult.begin(), tempResult.end(), comparison_function);

		vector<vector<int>>::iterator iter = tempResult.begin();

		for (int i = 0; i < K; i++)
		{
			vector<int> temp;
			temp.push_back(iter[0][1]);
			temp.push_back(iter[0][2]);


			result.push_back(temp);

			iter++;

		}

		return result;
	}

};



void main()
{
	vector<vector<int>> problem({
		vector<int>({ 3,3 }),
		vector<int>({ 5,-1 }),
		vector<int>({ -2,4 })
	});

	Solution s;

	s.kClosest(problem, 2);

	cin.get();
}
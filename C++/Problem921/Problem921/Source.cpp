#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	int minAddToMakeValid(string S)
	{
		int length = S.size();
		
		int leftCount = 0;

		int result = 0;

		for (int i = 0; i < length; i++)
		{
			char curString = S.at(i);
			
			if (curString == '(')
			{
				leftCount++;
				continue;
			}
			else if (curString == ')')
			{
				if (leftCount != 0)
				{
					leftCount--;
				}
				else
				{
					result++;
				}
			}
			else
			{
				continue;
			}
		}


		result += leftCount;



		return result;
	}
};

int main()
{
	Solution s;

	cout << s.minAddToMakeValid("())") << endl;

	int i = 0;
	cin >> i;
}
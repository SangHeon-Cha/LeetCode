#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	int minAddToMakeValid(string S)
	{
		int length = S.size();

		cout << length << endl;

		for (int i = 0; i < length; i++)
		{

		}

		return length;
	}
};

int main()
{
	Solution s;

	s.minAddToMakeValid("())");
}
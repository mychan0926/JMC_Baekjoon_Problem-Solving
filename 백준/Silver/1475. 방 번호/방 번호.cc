#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int a, b, c,count=0;
	vector <int> s(10,0);
	string t;
	cin >> t;
	for (int i = 0; i < t.size(); i++)
	{
		int j = t[i] - '0';
		if (j == 9)
		{
			s[6] += 1;

		}
		else
		{
			s[j] += 1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 6)
		{
			if (s[i] % 2 == 1)
			{
				if (count < (s[i] / 2) + 1)
				{
					count = (s[i] / 2) + 1;
				}
				
			}
			else
			{
				if (count < (s[i] / 2))
				{
					count = (s[i] / 2);
				}
				
			}

		}
		else
		{
			if (count < s[i])
			{
				count = s[i];
			}
		}
		
	}
	cout << count;
}
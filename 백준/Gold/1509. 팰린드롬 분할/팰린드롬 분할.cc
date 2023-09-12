#include <iostream>
#include <vector>
#include <string>
#include <math.h>



using namespace std;
vector <vector <int>> v;
vector <int> result;
int main()
{
	string s;
	cin >> s;
	v.resize(s.size(), vector<int>(s.size(), 0));
	for (int i = 0; i < s.size(); i++)
	{
		result.push_back(i + 1);
		v[i][i] = 1;
	}

	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] == s[i + 1])
		{
			v[i][i + 1] = 1;
		}

	}
		for (int i = 2; i < s.size(); i++)
		{
			for (int j = 0; j+i < s.size(); j++)
			{
				if (s[j] == s[j+i] && v[j+1][j+i-1] == 1)
				{
					v[j][i+j] = 1;
				}
			}
		}

	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i; j < s.size(); j++)
		{

			if (v[i][j])
			{
				if (i != 0)
				{

					result[j] = min(result[j], result[i - 1] + 1);
				}
				else
				{

					result[j] = 1;
				}

			}



		}
	}

	cout << result[s.size() - 1];
}
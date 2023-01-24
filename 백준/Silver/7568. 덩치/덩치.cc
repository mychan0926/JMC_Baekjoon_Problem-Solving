#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, x, y, a,b,c;
	vector <pair<int,int>> s;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> x >> y;
		
		s.push_back(make_pair(x, y));

	}
	for (int i = 0; i < a; i++)
	{
		int rank = 0;
		for (int j = 0; j < a; j++)
		{
			if (s[i].first < s[j].first && s[i].second < s[j].second)
			{
				rank++;
			}
			

		}

		cout << rank+1 << " ";
	}
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector <pair<int, int>> s;
	int N, M, a, b, x, y, count = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		cin >> x >> y;
		s.push_back({ a * 100 + b,x * 100 + y });
	}
	int i = 0;
	int k = 301;
	int tem = 0;
	int g = 0;
	sort(s.begin(), s.end());
	while (i < N)
	{
		
		if (s[i].first <= k && s[i].second > tem)
		{
			tem = s[i].second;

		}
		else if (s[i].first > k && s[i].second> tem)
		{
			count++;
			k = tem;
			if (s[i].first <= k && s[i].second > tem)
			{
				tem = s[i].second;

			}

		}
		if (s[i].second > 1130)
		{
			count++;
			break;
		}
		i++;

	}
	if (k > 1130 || tem>1130)
	{
		cout << count;
	}
	else
	{
		cout << 0;
	}
	
}
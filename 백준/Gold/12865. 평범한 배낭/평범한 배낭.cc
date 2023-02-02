#include <iostream>
#include <set>
#include <vector>

using namespace std;
vector <vector <int>> v;
vector <vector <int>> list;
int main()
{
	int a, b, c, d, n, m;
	cin >> a>>b;
	v.resize(b+1,vector <int>(a,0));
	for (int i = 0; i < a; i++)
	{
		cin >> c >> d;
		list.push_back({c,d});

	}
	if (b == 0)
	{
		cout << 0;
	}

	for (int i = 1; i <= b; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i >= list[j][0])
			{
				if (j == 0)
				{
					v[i][j] = list[j][1];
				}
				else
				{
					v[i][j] = max(v[i][j - 1], v[i - list[j][0]][j - 1] + list[j][1]);
				}
				
			}
			else
			{
				v[i][j] = v[i][j - 1];
			}
			if (i==b&&j==a-1)
			{
				cout << v[i][j];
			}
		}
	}
}
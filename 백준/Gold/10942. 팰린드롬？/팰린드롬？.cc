#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

vector <long long> v;
vector <vector <long long>> s(2001, vector <long long>(2001,0));
long long ve(long long a, long long b)
{
	long long t1 = s[a][b];
	if (t1 != 0)
	{
		return t1;
	}
	else
	{
		if (v[a] == v[b])
		{
			if (b - a <= 2)
			{
				s[a][b] = 2;
				return 2;
			}

			long long t2 = ve(a + 1, b - 1);
			s[a][b] = t2;
			return t2;
		}
		else
		{
			s[a][b] = 1;
			return 1;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long S, E;
	long long a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		long long t;
		cin >> t;
		v.push_back(t);
	}
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> S >> E;

		cout << ve(S - 1, E - 1) - 1 << '\n';
	}


}
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;
long long a, b, c, d, n = 1, m = 1;
vector <long long> v;
vector <long long> check;
set <long long> tl;
long long GCD(long long a, long long b);
long long LCM(long long a, long long b);
int main()
{
	cin >> a;
	check.resize(a + 1, 0);
	for (long long i = 0; i < a; i++)
	{
		long long tem;
		cin >> tem;
		v.push_back(tem);
	}
	for (long long i = 1; i < a; i++)
	{

		if (check[i] == 0)
		{
			check[i] = 1;
			long long tm = v[i - 1];
			long long t = 1;
			while (1)
			{
				if (check[tm] == 0)
				{
					check[tm] = 1;
					t++;
					tm = v[tm - 1];
				}
				else
				{
					break;
				}
			}
			if (t != 0)
			{
				tl.insert(t);
			}


		}

	}
	long long temp = 1;
	for (auto i = tl.begin(); i != tl.end(); i++)
	{
		if (i == tl.begin())
		{
			temp = *i;

		}
		else
		{
			temp = LCM(temp, *i);
		}


	}
	cout << temp;
	return 0;
}

long long GCD(long long a, long long b)
{
	while (a % b != 0)
	{
		long long c = a;
		a = b;
		b = c % a;
	}
	return b;
}
long long LCM(long long a, long long b)
{
	return a *b/ GCD(a, b);
}

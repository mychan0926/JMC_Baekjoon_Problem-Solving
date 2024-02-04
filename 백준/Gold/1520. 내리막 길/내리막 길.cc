#include <iostream>
#include <vector>
#include <map>


#define  ll long long

using namespace std;
long long a, b, c;
vector <vector <long long>> v;
vector <vector <long long>> v1;
vector <vector <long long>> v2;

bool check(long long y, long long x)
{
	if (y >= 0 && y < a && x >= 0 && x < b)
	{
		if (v1[y][x] != 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
	}
	else
	{
		return 0;
	}
}
long long tms(long long y, long long x)
{
	if (v2[y][x] == -1)
	{
		return 0;
	}
	else if (v2[y][x] != 0)
	{
		return v2[y][x];
	}

	long long checking = 0;
	long long t = v[y][x];
	long long sum = 0;

	if (y == a - 1 && x == b - 1)
	{
		return 1;
	}
	if (check(y-1, x)&&v[y-1][x]<t)
	{
		checking++;
		v1[y - 1][x] = 1;
		sum+=tms(y - 1, x);
		v1[y - 1][x] = 0;

	}
	if (check(y + 1, x) && v[y + 1][x] < t)
	{
		checking++;
		v1[y + 1][x] = 1;
		sum += tms(y + 1, x);
		v1[y +1][x] = 0;
	}
	if (check(y, x-1) && v[y ][x - 1] < t)
	{
		checking++;
		v1[y ][x - 1] = 1;
		sum += tms(y, x - 1);
		v1[y][x- 1] = 0;
	}
	if (check(y, x+1) && v[y ][x + 1] < t)
	{
		checking++;
		v1[y][x + 1] = 1;
		sum += tms(y, x + 1);
		v1[y][x + 1] = 0;
	}
	if (checking == 0)
	{
		return 0;
	}
	else
	{
		if (sum != 0)
		{

			v2[y][x] = sum;
			return sum;
		}
		else
		{

			v2[y][x] = -1;
			return 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a >> b;


	for (long long i = 0;i < a; i++)
	{
		vector <long long> tmp;
		vector <long long> tmp1;
		for (long long i = 0; i < b; i++)
		{

			long long t;
			cin >> t;
			tmp.push_back(t);
			tmp1.push_back(0);
			
		}
		v.push_back(tmp);
		v1.push_back(tmp1);

	}
	v2.resize(a, vector<long long>(b, 0));
	v1[0][0] = 1;
	
	cout << tms(0, 0);

}

#include <iostream>
#include <vector>
#include <map>
#define  ll long long
using namespace std;

map <ll, ll> m;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll a, b, c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		ll t;
		cin >> t;
		m[t]=i;
	}
	ll max=0;
	ll point=-1;
	ll g = 0;
	for (int i = 1; i <= a; i++)
	{
		if (point>=m[i])
		{
			if (max <= g)
			{
				max = g;
			}

			g = 1;
		}
		else
		{
			g++;
		}
		point = m[i];
		
	}
	if (max <= g)
	{
		max = g;
	}
	cout << a-max;
}

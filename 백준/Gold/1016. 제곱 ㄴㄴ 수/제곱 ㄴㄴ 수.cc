#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector <ll> h;
vector <ll> g;
int main() 
{
	ll min;
	ll max;
	cin >> min >> max;
	vector <ll> k(1000011,0);
	for (ll i = 2; i < 1000000; i++)
	{
		if (k[i] == 0)
		{
			k[i] = 1;
			g.push_back(i*i);
			for (ll j = 2; j < 1000000; j++)
			{
				if (j * i > 999999)
				{
					break;
				}
				else
				{
					k[j*i] = 2;
				}

			}

		}
	}

	vector<ll> j(max - min + 1, 0);
	for (ll i = 0; i < g.size(); i++)
	{
		ll hg = g[i];
		ll hhh = ( min / hg + (min % hg != 0))*hg-min;
		for (ll k=hhh;k<100000000;k+=hg)
		{
			if (k > max-min)
			{
				break;
			}
			else
			{
				j[k] = 1;
			}
		}
	}
	ll sum = 0;
	for (ll i = min; i <= max; i++)
	{
		if (j[i - min])
		{
			sum++;
		}
	}
	//	2 3 5 7 11 13
	cout << max - min + 1 - sum;
}


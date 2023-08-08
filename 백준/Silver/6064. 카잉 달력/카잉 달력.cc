#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;



int main()
{
	ll t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		ll m, n, x, y;
		ll d = 0;
		ll index = 0;
		int gt = 0;
		cin >> m >> n >> x >> y;
		if (m > n)
		{
			d = 1;
		}
		index = abs(m - n);

		int x1=x, y1=y;
		if (x > y)
		{
			x = x - y;
			y = 0;
		}
		else
		{
			y = y - x;
			x = 0;
		}
		if (d == 0)
		{
			gt = y;
			int h = 0;
			while (1)
			{
				if ((gt + h * index) % m == x)
				{
					cout<<h*n+y1<<"\n";
					break;
				}
				h++;
				if (h == 80000)
				{
					cout << -1 << "\n";
					break;
				}
			}
		}
		else
		{
			gt = x;
			int h = 0;
			while (1)
			{
				if ((gt + h * index) % n == y)
				{
					cout << h * m + x1 << "\n";
					break;
				}
				h++;
				if (h == 80000)
				{
					cout << -1 << "\n";
					break;
				}
			}
		}



	}
	


}


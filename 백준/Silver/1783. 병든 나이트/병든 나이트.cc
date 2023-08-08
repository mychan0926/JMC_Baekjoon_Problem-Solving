#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;



int main()
{
	ll a, b;
	cin >> a >> b;
	if (b >= 7 && a >= 3)
	{
		cout << 5 + (b - 7);
	}
	else if (a >= 3)
	{
		if (b == 1)
		{
			cout << 1;
		}
		else if (b == 2)
		{
			cout << 2;
		}
		else if (b == 3)
		{
			cout << 3;
		}
		else if (b >= 4)
		{
			cout << 4;
		}

	}
	else if (a == 2)
	{
		if (b == 1)
		{
			cout << 1;
		}
		else if (b == 2)
		{
			cout << 1;
		}
		else if (b <= 4)
		{
			cout << 2;
		}
		else if (b <= 6)
		{
			cout << 3;
		}
		else if (b >= 7)
		{
			cout << 4;
		}
	}
	else if (a == 1)
	{
		cout << 1;
	}
		
}


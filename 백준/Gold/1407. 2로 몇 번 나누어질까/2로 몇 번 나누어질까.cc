#include <iostream>
#include <vector>
#include <math.h>


#define  ll long long

using namespace std;
typedef unsigned long long ull;

ull involution(int a, int b) {
	if (b == 0) {
		return 1;
	}
	else if (b == 1) {
		return a;
	}
	ull tmp = involution(a, b / 2);
	if (b % 2) {
		return tmp * tmp * a;
	}
	else {
		return tmp * tmp;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, c;

	cin >> a >> b;
	long long ta = a;
	long long tb = b;
	long long sum = 0;
	long long index = 0;
	while (1)
	{
		long long t = tb - ta+1;
		if (t == 1)
		{
			if (tb % 2 == 1)
			{
				sum += involution(2, index) * 1;
				break;
			}
		}
		else
		{

			if (t % 2 == 0)
			{
				sum += involution(2, index) * (t / 2);

			}
			else
			{
				if (ta % 2 == 0)
				{
					sum += involution(2, index) * (t / 2);
				}
				else
				{
					sum += involution(2, index) * (t / 2+1);
				}
			}
		}

		if (ta % 2 == 0)
		{
			ta = ta / 2;
			tb = tb / 2;
		}
		else
		{
			ta = (ta + 1) / 2;
			tb = tb / 2;
		}
		index++;
		

	}
	cout << sum;
}

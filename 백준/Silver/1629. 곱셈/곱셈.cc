#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

long long pow_pur(long long e, long long b, long long c)
{
	int a = e;
	long long d = 1;
	while (1)
	{
		if (b / (d * 2) == 0)
		{
			break;
		}
		else
		{
			d *= 2;
			e = e * e;
			e %= c;
		}
	}
	if (b % d!=0)
	{
		return (e*pow_pur(a, b % d, c))%c;
	}
	else
	{
		return e%c;
	}
}
int main()
{
	long long a, b, c,d=1,e;
	cin >> a >> b>>c;
	cout << pow_pur(a,b,c)%c ;
}
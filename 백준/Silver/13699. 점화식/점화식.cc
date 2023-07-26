#include <iostream>
#include <vector>
using namespace std;

vector <long long> a(36,0);

long long cookie(long long n)
{
	if (a[n] != 0)
	{
		return a[n];
	}
	else
	{
		long long t = 0;
		for (long long i = 0; i < n; i++)
		{
			t += cookie(i)* cookie(n-i-1);
		}
		a[n] = t;
		return t;
	}
}

int main()
{
	long long n;
	cin >> n;
	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	cout<<cookie(n);

}
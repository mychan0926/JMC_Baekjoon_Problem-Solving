#include <iostream>
#include <vector>
#include <math.h>
#define  ll long long
#define sfor(a) for (long long i = 0; i < a; i++)
using namespace std;

int main()
{
	long long a;
	cin >> a;

	double sum = 0;
	for (int i = 0; i < a; i++)
	{
		sum += 1 / double(i + 1);
	}
	cout<<sum*(a);
}

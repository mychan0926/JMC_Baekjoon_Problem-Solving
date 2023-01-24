#include <iostream>

using namespace std;

int main()
{
	int a, b,c,d;
	cin >> a;
	b = 2;
	while (1)
	{
		if (a % b == 0)
		{
			cout << b << "\n";
			a /= b;

		}
		else
		{
			b += 1;
		}
		if (b == 10000000)
		{
			break;
		}
	}
}
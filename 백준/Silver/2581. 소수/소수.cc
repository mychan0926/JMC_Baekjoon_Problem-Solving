#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int b = 0;
	int c = 0;
	int min, max;
	cin >> min >> max;
	vector <int> a(30000);
	for (int i = 2; i < 10050; i++)
	{
		if (a[i] != 1)
		{
			for (int j = 2; j < (30001 / i); j++)
			{
				a[j * i] = 1;
			}
		}
	}
	if (min == 1)
	{
		min = 2;
	}
	for (int i = min; i < max + 1; i++)
	{
		int count = 0;
		if (a[i] != 1)
		{
			if (c == 0)
			{
				c = i;
			}
			b += i;
		}

	}
	if (b == 0 && c == 0)
	{
		cout << -1;
	}
	else
	{
		cout << b << "\n" << c;
	}

}
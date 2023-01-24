#include <iostream>

using namespace std;

int main()
{
	int a, b, c,d;
	cin >> a;
	d = 0;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		int count = 0;
		for (int j = 1; j < b+1; j++)
		{
			if (b % j == 0)
			{
				count += 1;
			}
		}
		if (count == 2)
		{
			d++;
		}
		
	}
	cout << d ;
}
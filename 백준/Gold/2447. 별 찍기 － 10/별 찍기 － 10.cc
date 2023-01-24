#include <iostream>

using namespace std;

void im(int a,int b,int c)
{
	if (c / 3 <= a && a < c / 3 * 2 )
	{
		if (c / 3 <= b && b < c / 3 * 2)
		{
			cout << " ";
		}
		else
		{
			if (c != 3)
			{
				im(a % (c / 3), b % (c / 3), c / 3);
			}
			else
			{
				cout << "*";
			}

		}
		
	}
	else
	{
		if (c != 3)
		{
			im(a % (c/3), b % (c / 3), c / 3);
		}
		else
		{
			cout << "*";
		}
	}
}

int main()
{
	int a, b, c, d, e;
	cin >> a;
	for (int y = 0; y < a; y++)
	{
		for (int x = 0; x < a; x++)
		{
			im(x,y,a);
		}
		cout << "\n";
	}
	
}
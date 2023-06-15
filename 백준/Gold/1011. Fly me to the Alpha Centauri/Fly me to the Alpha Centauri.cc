#include <iostream>

using namespace std;

int main(void)
{
	long long h = 0;
	cin >> h;
	for (long long k = 0; k < h; k++)
	{
		long long t1, t2;
		long long a = 0, b = 0, n;
		long long i = 0;

		cin >> t1 >> t2;
		n = t2 - t1;
		if (n != 1)
		{
			while (1)
			{
				i++;
				a += (((i + 1) / 2));
				if (a < n && a + (((i + 2) / 2)) >= n)
				{
					b = i + 1;
					break;
				}
			}
			cout << b << "\n";
		}
		else
		{
			cout << 1 << "\n";
		}
		


		
	}
	
}

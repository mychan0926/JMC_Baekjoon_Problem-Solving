#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long int x[18][18];
	long long int y[170];
	long long int a, b, c, d;
	cin >> a;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 1; j < 16; j++)
		{
			if (i == 0)
			{
				x[i][j] = j;
			}
			else
			{
				x[i][j] = 0;
				for (int k=1;k<j+1;k++)
				{
					x[i][j] += x[i-1][k];
				}
			}
			

		}

	}
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		cout << x[b][c] << "\n";
		

	}
}
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int N, M, a;
	cin >> N;
	int mark = 0;
	for (int i = 1; i < N+1; i++)
	{
		int g = i;
		int h = i;
		int plus = 0;
		int c = 0;

		while (1)
		{
			if (g / 10 >= 1)
			{
				g = g / 10;
				c++;
			}
			else
			{
				c++;
				break;
			}
		}

		
			for (int i = 1; i < c; i++)
			{
				int x = pow(10, c - i);
				plus += h / pow(10, c - i);
				h = h % x;
			}
			
				plus += h;
				plus += i;
			
			
			if (plus == N)
			{
				cout << i;
				mark++;
				break;
			}

		


	}
	if (mark == 0)
	{
		cout << "0";
	}

}
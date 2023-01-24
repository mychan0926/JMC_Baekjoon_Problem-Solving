#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string a, b;
	vector <char> a1(10050, ' '), b1(10050, ' '), c1(10050, ' ');
	int up=0;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++)
	{
		a1[10050 - i - 1] = a[a.length()-i-1];
	}
	for (int i = 0; i < b.length(); i++)
	{
		b1[10050 - i - 1] = b[b.length()-i-1];
	}

	for (int i = 0; i < 10050; i++)
	{

			if ((a1[10050 - i - 1] == ' ') && b1[10050 - i - 1] == ' ')
			{
				if (up != 0)
				{
					c1[10050 - i - 1] = up + '0';
				}
				
			}
			else if (a1[10050 - i - 1] == ' ')
			{
				c1[10050 - i - 1] = b1[10050 - i - 1]+up;
			}
			else if (b1[10050 - i - 1] == ' ')
			{
				c1[10050 - i - 1] = a1[10050 - i - 1]+up;
			}
			else
			{
				c1[10050 - i - 1] = a1[10050 - i - 1] + b1[10050 - i - 1] -'0'+ up;
			}
			up = 0;
			if (c1[10050 - i - 1] >= '9' && i < 10010)
			{
				up = (c1[10050 - i - 1] - '0') / 10;
				c1[10050 - i - 1] = (c1[10050 - i - 1] - '0') % 10 + '0';
			}

		
	}
	for (int i = 0; i < 10050; i++)
	{
		if (c1[i] != ' ')
		{
			cout << c1[i];
		}
	}

}
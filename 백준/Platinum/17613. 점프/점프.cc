#include <iostream>
#include <vector>
#include <map>

using namespace std;
map <long long, long long> m;
int cu(int x, int y);
int a, b, c;
int main()
{

	cin >> a;

	for (int i = 0; i < a; i++)
	{

		cin >> b >> c;

		cout << cu(b, c)<<"\n";

	}
	

}

int cu(int x, int y)
{

	if (x <= 0 && y <= 0)
	{
		return 0;
	}
	else if (x==0&&m[y]!=0)
	{
		return m[y];
	}
	else
	{
		int i = 0;
		int a = 1;
		while (y >= a * 2 - 1)
		{
			a *= 2;
			i++;
		}
		if (x < a - 1)
		{
			int t = max(cu(x, a - 2), cu(a - 1, y));
			if (x == 0)
			{
				m[y] = t;
			}
			return t;
		}
		else
		{
			int t = cu(x - (a - 1), y - (a - 1)) + i;
			if (x == 0)
			{
				m[y] = t;
			}
			
			return t;
		}
	}
	

}
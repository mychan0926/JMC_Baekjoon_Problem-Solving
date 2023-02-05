#include <iostream>
#include <vector>
using namespace std;
vector <int> v;
int a, b, c, d, n, m=0;
void p(int x, int y, int i);
vector <vector <int>>  v1;

int main()
{

	
	cin >> a;

	v1.resize(a + 1, {0,0});
	v.push_back(0);
	for (int i = 0; i < a; i++)
	{
		
		cin >> b;
		v.push_back(b);
	}
	p(0,0,0);
	cout << m;
}
void p(int x,int y,int i)
{
	if (x <= a)
	{
		i += v[x];
		if (y != 0)
		{
			if (v1[x][y - 1] > i)
			{
				return;
			}
			else
			{
				v1[x][y - 1] = i;
			}
		}
	}
	
	
	if (x < a)
	{
	
		if (y == 2)
		{
			p(x+2,1,i);
		}
		else
		{
			p(x + 1, y+1, i);
			p(x + 2, 1, i);
		}
	}
	else if(x==a)
	{
		if (m < i)
		{
			m = i;
		}

		
	}
	return;
}
#include <iostream>
#include <vector>
#include <string>
#include <math.h>



using namespace std;

long long t(long long x1, long long x2, long long x3, long long y1, long long y2, long long y3)
{
	if ((x1 * y2 + x2 * y3 + x3 * y1 - (x2 * y1 + x3 * y2 + x1 * y3)) > 0)
	{
		return 1;
	}
	else if ((x1 * y2 + x2 * y3 + x3 * y1 - (x2 * y1 + x3 * y2 + x1 * y3)) == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
	
}

int main()
{
	long long x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	
	if ((t(x1, x2, x3,y1,y2,y3)* t(x1, x2, x4, y1, y2, y4)<=0)&& t(x3, x4, x1, y3, y4, y1) * t(x3, x4, x2, y3, y4, y2) <=0)
	{
		if (t(x1, x2, x3, y1, y2, y3) * t(x1, x2, x4, y1, y2, y4) == 0 && t(x3, x4, x1, y3, y4, y1) * t(x3, x4, x2, y3, y4, y2) == 0)
		{
			long long a, b, c, d, e, f;

			if (x1==x2&&x3==x4&&x2==x3)
			{
				a = min(y1, y2);
				b = max(y1, y2);
				c = min(y3, y4);
				d = max(y3, y4);

				if (a > c)
				{
					int t1, t2;
					t1 = a;
					t2 = b;
					a = c;
					b = d;
					c = t1;
					d = t2;
				}

				if (c <= b || a >= d)
				{
					cout << 1;
				}
				else
				{
					cout << 0;
				}
			}
			else
			{
				a = min(x1, x2);
				b = max(x1, x2);
				c = min(x3, x4);
				d = max(x3, x4);
				if (a > c)
				{
					int t1, t2;
					t1 = a;
					t2 = b;
					a = c;
					b = d;
					c = t1;
					d = t2;
				}


				if (c <= b || a >= d)
				{
					cout << 1;
				}
				else
				{
					cout << 0;
				}
			}
			




		}
		else
		{
			cout << 1;
		}
		
	}
	else

	{
		cout << 0;
	}
	
}
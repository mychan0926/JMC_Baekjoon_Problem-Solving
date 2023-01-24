#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main()
{
	vector <int>xr(2);
	vector <int>yr(2);
	int x = 0, y = 0,r=1;
	int n, m, h,t;
	int bx1, by1,bx2,by2;
	xr = {1,0,-1,0  };
	yr = { 0,1,0,-1 };
	cin >> t;
	for (int i = 0; i < t; i++)
	{

		string tmp;
		x = 0, y = 0, r = 0, bx1 = 0; by1 = 0, bx2 = 0; by2 = 0;
		cin >> tmp;
		for (int j = 0; j < tmp.size(); j++)
		{
			if (tmp[j] == 'F')
			{
				x += xr[r];
				y += yr[r];

			}
			else if (tmp[j] == 'B')
			{
				x -= xr[r];
				y -= yr[r];

			}
			else if (tmp[j] == 'L')
			{
				r++;
				if (r == 4)
				{
					r = 0;
				}

			}
			else
			{
				r--;
				if (r == -1)
				{
					r = 3;
				}
			}
			if (x > bx1)
			{
				bx1 = x;
			}
			if (x < bx2)
			{
				bx2 = x;
			}
			if (y > by1)
			{
				by1 = y;
			}
			if (y < by2)
			{
				by2 = y;
			}
			

		}
		cout << (bx1 - bx2) * (by1 - by2) << "\n";
	}

}
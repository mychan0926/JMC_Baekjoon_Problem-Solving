
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int main()
{
	double case_num = 0;
	
	cin >> case_num;


	for (int i = 0; i < case_num; i++)
	{
		int r;
		int  x1, y1, x2, y2, r1, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		float x3, y3;
		x3 = abs(x2 - x1);
		y3 = abs(y2 - y1);
		r = x3*x3 + y3*y3;

		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (r == pow(r1 + r2, 2))
		{
			cout << "1" << "\n";
		}
		else if (r == pow(abs(r1 - r2), 2))
		{
			cout << "1" << "\n";
		}
		else if (r > pow(r1 + r2, 2))
		{
			cout << "0" << "\n";
		}
		else if (r < pow(abs(r1 - r2), 2))
		{
			cout << "0" << "\n";
		}
		else
		{
			cout << "2" << "\n";
		}

	}
}
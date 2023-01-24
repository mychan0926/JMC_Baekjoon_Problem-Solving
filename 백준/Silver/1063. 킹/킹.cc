#include <iostream>
#include <string>
using namespace std;




int main()
{
	int i, j, k;
	string stone, king;
	int stonex, stoney, kingx, kingy;
	cin >> king >> stone>>i;

	kingx = king[0] - 'A';
	kingy = king[1] - 1-'0';
	stonex = stone[0] - 'A';
	stoney = stone[1] - 1-'0';


	for (int l = 0; l < i; l++)
	{
		bool meet=0;
		string tmp;
		int x=0, y=0;
		cin >> tmp;
		if (tmp == "R")
		{
			x++;
		}
		else if (tmp == "L")
		{
			x--;
		}
		else if (tmp == "B")
		{
			y--;
		}
		else if (tmp == "T")
		{
			y++;
		}
		else if (tmp == "RT")
		{
			x++;
			y++;
		}
		else if (tmp == "LT")
		{
			x--;
			y++;
		}
		else if(tmp == "RB")
		{
			x++;
			y--;
		}
		else if (tmp == "LB")
		{
			x--;
			y--;
		}
		if (x + kingx == stonex && y + kingy == stoney) { meet = 1; }


		if (meet)
		{
			if (x + stonex != 8 && x + stonex != -1 && y + stoney != 8 && y + stoney != -1)
			{
				if (x + kingx != 8 && x + kingx != -1 && y + kingy != 8 && y + kingy != -1)
				{
					kingx += x;
					kingy += y;
					stonex += x;
					stoney += y;
				}
			}
		}
		else
		{
			if (x + kingx != 8 && x + kingx != -1 && y + kingy != 8 && y + kingy != -1)
			{
				kingx += x;
				kingy += y;
			}
		}
		
		
		
	}
	cout << char(kingx + 'A') << char(kingy + 1 + '0')<<"\n";
	cout << char(stonex + 'A') << char(stoney + 1 + '0') << "\n";
}
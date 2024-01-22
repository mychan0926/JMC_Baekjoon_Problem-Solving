#include <iostream>
#include <vector>
#include <map>


#define  ll long long

using namespace std;
vector <vector <int>> v;
int x, y, d;
int clear = 0;
int a, b;
bool can_move(int a1,int b1)
{
	if (y + b1 >= 0 && y + b1 < a && x + a1 >= 0 && x + a1 < b)
	{
		if (v[y + b1][x + a1] == 1)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int clear_check()
{
	int result = 0;
	int ab[4] = { 0, -1, 0, 1 };
	int bb[4] = { -1, 0, 1, 0 };
	for(int i=0;i<4;i++)
	{
		if (can_move(ab[i], bb[i]))
		{
			if (v[y + bb[i]][x + ab[i]] == 0)
			{
				result++;
			}
		}

	}
	return result;
}


void front()
{
	int x1 = 0,y1=0;
	if (d == 0)
	{
		y1--;
	}
	if (d == 1)
	{
		x1++;
	}
	if (d == 2)
	{
		y1++;
	}
	if (d == 3)
	{
		x1--;
	}
	if (can_move(x1, y1))
	{
		if (v[y + y1][x + x1] == 0)
		{
			y += y1;
			x += x1;
		}
	}

}

void back()
{
	int x1 = 0, y1 = 0;
	if (d == 0)
	{
		y1--;
	}
	if (d == 1)
	{
		x1++;
	}
	if (d == 2)
	{
		y1++;
	}
	if (d == 3)
	{
		x1--;
	}
	x1 *= -1;
	y1 *= -1;
	if (can_move(x1, y1))
	{
		if (v[y + y1][x + x1] == 0|| v[y + y1][x + x1] == -1)
		{
			y += y1;
			x += x1;
		}
		else
		{
			cout << clear
;

			exit(0);
		}
	}
	else
	{
		cout << clear;
		exit(0);
	}

}




void scheduler(int i)
{


}
void check_block()
{
	if (v[y][x] == 0)
	{
		v[y][x] = -1;
		clear++;
	}
	if (!clear_check())
	{
		back();
	}
	else
	{
		d -= 1;
		if (d == -1)
		{
			d = 3;
		}
		front();
	}
}

int main()
{

	cin >> a>>b;


	cin >> y >> x >> d;
	for (int i = 0; i < a; i++)
	{
		vector <int> tmp;
		for (int j = 0; j < b; j++)
		{
			int t;
			cin >> t;
			tmp.push_back(t);

		}
		v.push_back(tmp);
	}
	while (1)
	{
		check_block();
	}

}

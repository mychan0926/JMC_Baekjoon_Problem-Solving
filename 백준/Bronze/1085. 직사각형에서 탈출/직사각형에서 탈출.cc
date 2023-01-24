#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	int w = 0;
	int h = 0;
	int max = 10000;
	cin >> x >> y >> w >> h;
	if (x < max)
	{
		max = x;
	}
	if (y < max)
	{
		max = y;
	}
	if (w - x < max)
	{
		max = w - x;
	}
	if (h - y < max)
	{
		max = h - y;
	}
	cout << max;

}
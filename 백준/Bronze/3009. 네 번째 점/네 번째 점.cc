#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a, b, c;
	int d, e, f;
	int x, y;
	int count;
	cin >> a >> d;
	cin >> b >> e;
	cin >> c >> f;
	if (a == b)
	{
		x = c;
	}
	else if (a == c)
	{
		x = b;
	}
	else
	{
		x = a;
	}

	if (d == e)
	{
		y = f;
	}
	else if (d == f)
	{
		y = e ;
	}
	else
	{
		y= d;
	}
	cout << x << " " << y;
}
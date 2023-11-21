#include <iostream>
#include <vector>
using namespace std;
vector <int> v(1001,-1);
int t(int a)
{
	int g=0;
	if (a < 0)
	{
		return 0;
	}
	if (v[a] != -1)
	{
		return v[a];
	}

	if (a == 0)
	{
		return 1;
	}
	else if(a<0)
	{
		return 0;
	}
	int gfd = (t(a - 1) + t(a - 2)) % 10007;
	v[a] = gfd;
	return gfd;
}

int main()
{
	int h = 0;
	cin >> h;
	
	cout<< t(h)%10007;
}

#include <iostream>
#include <vector>
using namespace std;
vector <int> g(1001,0);
int t(int a) {

	if (a < 0)
	{
		return 0;
	}
	else
	{
		if (g[a] != 0)
		{
			return g[a]%10007;
		}
		else
		{
			int gg= t(a - 1) + t(a - 2)*2;
			g[a] = gg % 10007;
			return gg % 10007;
		}
	}
	
}

int main()
{
	int a;
	cin >> a;
	g[1] = 1;
	g[2] = 3;
	cout<<t(a);
}
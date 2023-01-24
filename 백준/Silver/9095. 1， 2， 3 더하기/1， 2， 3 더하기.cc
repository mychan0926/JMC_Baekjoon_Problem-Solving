#include <iostream>
#include <vector>
using namespace std;


int o(int l, int count);
int main()
{
	int a, b, c, d;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		cout<< o(b,0) <<"\n";
	}
}
int o(int l,int count)
{
	if (l == 0)
	{
		return 1;
	}
	else if(l>0)
	{
		return o(l-1,count)+ o(l - 2,count)+ o(l - 3,count);
	}
	else
	{
		return 0;
	}
}






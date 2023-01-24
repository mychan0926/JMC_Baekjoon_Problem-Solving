#include <iostream>
using namespace std;

int pibo(int a)
{
	if (a == 2)
	{
		return 1;
	}
	if (a == 1)
	{
		return 1;
	}
	if (a == 0)
	{
		return 0;
	}
	return pibo(a - 1) + pibo(a - 2);
}
int main()
{
	int sum = 1;
	int a = 0;
	int b = 0;
	cin >> a;
	cout << pibo (a);
	
}
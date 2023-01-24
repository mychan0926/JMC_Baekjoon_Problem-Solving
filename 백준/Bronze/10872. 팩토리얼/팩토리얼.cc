#include <iostream>
using namespace std;

int pac(int a)
{
	int sum = 1;
	if (a== 0)
	{
		return 1;
	}
	else
	{
		return a * pac(a-1);

	}
}
int main()
{
	int sum = 1;
	int a = 0;
	int b = 0;
	cin >> a;
	cout << pac(a);
	
}
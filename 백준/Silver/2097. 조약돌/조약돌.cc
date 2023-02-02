#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int a;
	cin >> a;
	int i = 1;
	while (1)
	{
		if (i * i >= a) { break; }
		i++;
	}
	if (a == 1||a==2)
	{
		cout << 4;
	}
	else if (i * i == a)
	{
		cout << 4 * (i-1);
	}
	else if ((i*i-a)/i==1)
	{
		cout << 2 * (i-1) + 2 * (i - 2);
		
	}
	else
	{
		cout << 4 * (i-1);
		
	}
}

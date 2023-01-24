#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string a;
	while (1)
	{
		cin >> a;
		if (a == "0") break;
		int count = 0;
		if (a.size() % 2 == 1)
		{
			for (int i = 0; i < (a.size() - 1) / 2; i++)
			{
				if (a[i] != a[a.size() - 1 - i])
				{
					count++;
				}
			}
		}
		else
		{
			for (int i = 0; i < (a.size()) / 2; i++)
			{
				if (a[i] != a[a.size() - 1 - i])
				{
					count++;
				}
			}
		}
		if (count != 0)
		{
			cout << "no\n";
		}
		else
		{
			cout << "yes\n";
		}
	}
}
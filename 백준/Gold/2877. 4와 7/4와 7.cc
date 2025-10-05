#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string trans(int a)
{
	string stri;
	string t;
	while (1)
	{
		if (a / 2 > 0)
		{
			stri.push_back((a % 2)+'0');
			a /= 2;

		}
		else
		{
			stri.push_back(a%2 + '0');
			break;
		}
	}

	for (int i = 0; i < stri.size(); i++)
	{
		t.push_back(stri[stri.size() - i - 1]);
	}
	return t;
}

int main()
{
	int a;
	cin >> a;
	string g=trans(a +1);
	for (int i = 1; i < g.size(); i++)
	{
		if (g[i] == '1')
		{
			cout << '7';
		}
		else
		{
			cout << '4';
		}
	}
	
}

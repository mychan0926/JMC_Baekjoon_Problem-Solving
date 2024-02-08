#include <iostream>
#include <vector>
#include <math.h>
#define  ll long long

using namespace std;

vector <int> v(1000001,0);
vector <int> v1;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a;

	cin >> a;

	for (int i = 2; i < 1000001; i++)
	{

		for (int j = 2*i; j < 1000001; j += i)
		{
			if (v[j] == 0)
			{
				v[j] = 1;
			}
		}

	}
	for (int i = 2; i < 1000001; i++)
	{
		if (v[i] == 0)
		{
			v1.push_back(i);
		}
	}
	long long k ,kk ,kkk ,kkkk;

	if (a < 8)
	{
		cout << -1;
		return 0;
	}
	else
	{ 
		if (a % 2 == 0)
		{
			a -= 4;
			k = 2;
			kk = 2;
		}
		else
		{
			a -=5;
			k = 2;
			kk = 3;
		}
	}
	for (int i = 2; i < a + 1; i++)
	{
		if (v[i] == 0 && v[a - i] == 0)
		{
			cout <<k<<" "<<kk<<" " << i << " " << a - i;
			return 0;
		}
	}
	cout << -1;

}

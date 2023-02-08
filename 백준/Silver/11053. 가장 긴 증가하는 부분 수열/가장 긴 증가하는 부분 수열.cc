#include <iostream>
#include <vector>
using namespace std;
vector <int> v;
vector <int> v1;
int a, b, c, d, n, m = 0;

int main()
{
	cin >> a;
	v1.resize(a,0);
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v.push_back(b);
	}
	for (int i = 0; i < a; i++)
	{
		v1[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (v[j]<v[i])
			{
				v1[i] = max(v1[i], v1[j] + 1);
			}
		}
	}
	int g = 1;
	for (int i = 0; i < a; i++)
	{
		g = max(v1[i],g);
	}
	cout << g;
}
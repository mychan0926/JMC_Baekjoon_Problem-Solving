#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int a, b, c, d, n, m;
	cin >> a;
	vector <int> t(3, 0);
	for (int j = 0; j < 3; j++)
	{
		cin >> t[j];
	}
	for (int i = 1; i < a; i++)
	{
		vector <int> v(3, 0);
		for (int j = 0; j < 3; j++)
		{
			cin >> v[j];
		}
		v[0] += min(t[1],t[2]);
		v[1] += min(t[0], t[2]);
		v[2] += min(t[1], t[0]);
		t = v;
	}
	cout << min(t[1], min(t[0], t[2]));
}
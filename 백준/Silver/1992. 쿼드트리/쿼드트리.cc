#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

vector <vector <int>> v;
string g(vector <vector <int>> t)
{
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	int b1, b2, b3, b4;
	string ta;
	vector <vector <int>> c1(t.size() / 2, vector <int>(t.size() / 2, 0));
	vector <vector <int>> c2(t.size() / 2, vector <int>(t.size() / 2, 0));
	vector <vector <int>> c3(t.size() / 2, vector <int>(t.size() / 2, 0));
	vector <vector <int>> c4(t.size() / 2, vector <int>(t.size() / 2, 0));

	b1 = t[0][0];
	for (int i = 0; i < t.size() / 2; i++)
	{
		for (int j = 0; j < t[i].size() / 2; j++)
		{
			c1[i][j] = t[i][j];
			if (b1 != t[i][j])
			{
				a1 = 1;
			}
		}
	}
	b3 = t[t.size() / 2][0];
	for (int i = t.size() / 2; i < t.size(); i++)
	{
		for (int j = 0; j < t[i].size() / 2; j++)
		{
			c3[i- t.size() / 2][j] = t[i][j];
			if (b3 != t[i][j])
			{
				a3 = 1;
			}
		}
	}
	b4 = t[t.size() / 2][t.size() / 2];
	for (int i = t.size() / 2; i < t.size(); i++)
	{
		for (int j = t.size() / 2; j < t[i].size(); j++)
		{
			c4[i - t.size() / 2][j - t.size() / 2] = t[i][j];
			if (b4 != t[i][j])
			{
				a4 = 1;
			}
		}
	}
	b2 = t[0][t.size() / 2];
	for (int i = 0; i < t.size() / 2; i++)
	{
		for (int j = t.size() / 2; j < t[i].size(); j++)
		{
			c2[i][j - t.size() / 2] = t[i][j];
			if (b2 != t[i][j])
			{
				a2 = 1;
			}
		}
	}
	ta.push_back('(');
	if (a1 == 0)
	{
		ta.push_back(b1 + '0');
	}
	else
	{
		ta += g(c1);
	}
	if (a2 == 0)
	{
		ta.push_back(b2 + '0');
	}
	else
	{
		ta += g(c2);
	}
	if (a3 == 0)
	{
		ta.push_back(b3 + '0');
	}
	else
	{
		ta += g(c3);
	}
	if (a4 == 0)
	{
		ta.push_back(b4+'0');
	}
	else
	{
		ta+=g(c4);
	}
	ta.push_back(')');

	return ta;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string t;
		cin >> t;
		vector <int> h;
		for (int j = 0; j < t.size(); j++)
		{
			h.push_back(t[j]-'0');
		}
		v.push_back(h);
	}

	int hf = v[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (hf != v[i][j])
			{
				cout << g(v);
				return 0;
			}
		}
	}
	cout << hf;



}
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
long long a, b, d, n;
vector <vector <int>> m;
vector <vector <int>> v;
vector < vector <int>> c;
int counter = 0;
void p(int i, int j, int mod);
queue < vector <int>> q;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a >> b;
	m.resize(a, vector <int>(b, 0));
	v.resize(a, vector <int>(b, 1000000));
	c.resize(a, vector <int>(b, 1000000));
	for (int i = 0; i < a; i++)
	{
		string temp;
		cin >> temp;
		for (int j = 0; j < b; j++)
		{
			m[i][j] = temp[j]-'0';
		}
	}
	v[0][0] = 1;
	c[0][0] = 1;
	
	p(0, 0, 0);
	int t = q.size();
	while (q.size() != 0)
	{
		t = q.size();
		for (int i = 0; i < t; i++)
		{
			p(q.front()[0], q.front()[1], q.front()[2]);
			q.pop();
		}
	}
	
	


	if (c[a - 1][b - 1] ==1000000&& v[a - 1][b - 1]==1000000)
	{
		cout << -1;
	}
	else if (c[a - 1][b - 1] > v[a - 1][b - 1])
	{
		cout << v[a - 1][b - 1] ;
	}
	else if (c[a - 1][b - 1] <= v[a - 1][b - 1])
	{
		cout << c[a - 1][b - 1] ;
	}
	
}
void p(int i, int j,int mod)
{
	if (mod == 0)
	{
		if (i != 0)
		{
			if (m[i - 1][j] != 1)
			{
				if (v[i - 1][j] > v[i][j] + 1)
				{
					v[i - 1][j] = v[i][j] + 1;
					q.push({ i - 1, j ,0});
				}

				
			}
			else
			{
				if (c[i - 1][j] > v[i][j] + 1)
				{
					c[i - 1][j] = v[i][j] + 1;
					q.push({ i - 1, j, 1 });

				}
			}

			
		}
		if (j != 0)
		{
			if (m[i][j - 1] != 1)
			{
				if (v[i ][j - 1] > v[i][j] + 1)
				{
					v[i][j - 1] = v[i][j] + 1;
					q.push({ i, j - 1, 0 });

				}


			}
			else
			{
				if (c[i][j - 1] > v[i][j] + 1)
				{
					c[i][j - 1] = v[i][j] + 1;
					q.push({ i, j - 1, 1 });
				}
			}
			
		}
		if (i != a-1)
		{
			if (m[i + 1][j] != 1)
			{
				if (v[i + 1][j] > v[i][j] + 1)
				{
					v[i + 1][j] = v[i][j] + 1;
					q.push({ i + 1, j, 0 });
				}


			}
			else
			{
				if (c[i + 1][j] > v[i][j] + 1)
				{
					c[i + 1][j ] = v[i][j] + 1;
					q.push({ i + 1, j, 1 });
				}
			}
			
		}
		if (j != b-1)
		{
			if (m[i][j + 1] != 1)
			{
				if (v[i][j + 1] > v[i][j] + 1)
				{
					v[i ][j + 1] = v[i][j] + 1;
					q.push({ i, j + 1, 0 });
				}


			}
			else
			{
				if (c[i ][j + 1] > v[i][j] + 1)
				{
					c[i ][j + 1] = v[i][j] + 1;
					q.push({ i, j + 1, 1 });
				}
			}

		}

	}
	else
	{
		if (i != 0)
		{
			if (m[i - 1][j] == 0)
			{
				if (c[i - 1][j] > c[i][j] + 1)
				{
					c[i - 1][j] = c[i][j] + 1;
					q.push({ i - 1, j, 1});
				}
			}
		}
		if (j != 0)
		{
			if (m[i ][j - 1] == 0)
			{
				if (c[i ][j - 1] > c[i][j] + 1)
				{
					c[i ][j - 1] = c[i][j] + 1;
					q.push({ i , j - 1, 1 });
				}
			}
		}
		if (i != a - 1)
		{
			if (m[i+1][j] == 0)
			{
				if (c[i + 1][j] > c[i][j] + 1)
				{
					c[i + 1][j ] = c[i][j] + 1;
					q.push({ i + 1, j, 1 });
				}
			}
		}
		if (j != b - 1)
		{
			if (m[i][j + 1] == 0)
			{
				if (c[i][j + 1] > c[i][j] + 1)
				{
					c[i][j + 1] = c[i][j] + 1;
					q.push({ i, j + 1, 1 });
				}
			}
		}

	}
	return;
}
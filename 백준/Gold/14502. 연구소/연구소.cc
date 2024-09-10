#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector <vector <int>> v;
vector <vector <int>> T;

queue <pair<int, int>> q;
queue <pair<int, int>> tq;

int n, m;

bool checking(int a, int b)
{
	return !(0 > a || n <= a || 0 > b || m <= b);
}


void check(int a,int b)
{
	if (T[a][b] == 2)
	{
		if (checking(a - 1, b) == 1)
		{
			if (T[a - 1][b] == 0)
			{
				T[a - 1][b] = 2;
				tq.push({ a - 1, b });
			}
		}
		if (checking(a + 1, b) == 1)
		{
			if (T[a + 1][b] == 0)
			{
				T[a + 1][b] = 2;
				tq.push({ a + 1, b });
			}
		}
		if (checking(a, b - 1) == 1)
		{
			if (T[a][b - 1] == 0)
			{
				T[a][b - 1] = 2;
				tq.push({ a, b - 1 });
			}
		}
		if (checking(a, b + 1) == 1)
		{
			if (T[a][b + 1] == 0)
			{
				T[a][b + 1] = 2;
				tq.push({ a, b + 1 });
			}
		}
	}
}

int counting()
{
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (T[i][j] == 0)
			{
				t++;
			}
		}
	}
	return t;
}

int vir()
{
	if (tq.empty())
	{
		return counting();
	}

	while (1)
	{
		check(tq.front().first, tq.front().second);
		tq.pop();
		if (tq.empty())
		{
			break;
		}
	}
	return counting();
}


int main()
{


	cin >> n >> m;
	int max = 0;
	v.resize(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int t;
			cin >> t;
			v[i][j] = t;
			if (t == 2)
			{
				q.push({i,j});
			}
		}
	}
	for (int i = 0; i < n * m; i++)
	{
		
		for (int j = 0; j < n * m; j++)
		{
			for (int k = 0; k < n * m; k++)
			{
				T = v;
				tq = q;
				if (T[i%n][i/n] == 0 && T[j % n][j / n] == 0 && T[k % n][k / n] == 0 && i != j && j != k && k != i)
				{
					T[i % n][i / n] = 1;
					T[j % n][j / n] = 1;
					T[k % n][k / n] = 1;
					int t = vir();
					if (max < t)
					{
						max = t;
					}


				}
				
			}
		}
	}
	cout << max;
	
}
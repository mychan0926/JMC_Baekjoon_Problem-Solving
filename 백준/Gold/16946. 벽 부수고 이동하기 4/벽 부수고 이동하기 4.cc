#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>
#define ll long long
using namespace std;
vector <vector <vector <int>>>  v;
vector <vector <vector <int>>> v1;
vector <vector <vector <int>>> v2;
int N, M;
int checking(int y,int x)
{
	v1[y][x][0]=1;
	int sum = 1;
	if(y>0)
	{
		if (v1[y - 1][x][0] == 0)
		{
			sum+=checking(y - 1, x);
		}
	}
	if (y < N-1)
	{
		if (v1[y + 1][x][0] == 0)
		{
			sum += checking(y + 1, x);
		}
	}
	if (x > 0)
	{
		if (v1[y][x-1][0] == 0)
		{
			sum += checking(y , x-1);
		}
	}
	if (x < M-1)
	{
		if (v1[y][x+1][0] == 0)
		{
			sum += checking(y, x+1);
		}
	}

	return sum;
}

void fill(int y, int x,int count,int num)
{
	v[y][x][0] = count;
	v[y][x][1] = num;
	if (y > 0)
	{
		if (v[y - 1][x][0] == 0)
		{
			fill(y - 1, x,count,num);
		}
	}
	if (y < N - 1)
	{
		if (v[y + 1][x][0] == 0)
		{
			fill(y + 1, x, count, num);
		}
	}
	if (x > 0)
	{
		if (v[y][x - 1][0] == 0)
		{
			fill(y, x - 1, count, num);
		}
	}
	if (x < M - 1)
	{
		if (v[y][x + 1][0] == 0)
		{
			fill(y, x + 1, count, num);
		}
	}
}

int main()
{

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		vector<vector<int>> t;
		string k;
		cin >> k;
		for (int j = 0; j < M; j++)
		{
			
			t.push_back({ k[j]-'0',-1});
		}
		v.push_back(t);

	}
	v1 = v;
	v2 = v1;
	int g = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			g++;
			if (v1[i][j][0] == 0)
			{
				fill(i,j, checking(i, j),g);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int gsum = 0;
			vector <int> t;
			if (v2[i][j][0] == 1)
			{
				if (i > 0)
				{
					if (v[i - 1][j][1] != -1)
					{
						gsum += v[i - 1][j][0];
					t.push_back(v[i - 1][j][1]);
					}
					
				}
				if (i < N - 1)
				{
					
					if (v[i + 1][j][1] != -1 &&find(t.begin(), t.end(), v[i + 1][j][1])==t.end())
					{
						gsum += v[i + 1][j][0];
						t.push_back(v[i + 1][j][1]);
					}
				}
				if (j > 0)
				{
					if (v[i][j - 1][1] != -1 &&find(t.begin(), t.end(), v[i][j-1][1]) == t.end())
					{
						gsum += v[i][j - 1][0];
						t.push_back(v[i][j - 1][1]);
					}
				}
				if (j < M - 1)
				{
					if (v[i][j + 1][1] != -1 &&find(t.begin(), t.end(), v[i][j + 1][1]) == t.end())
					{
						gsum += v[i][j + 1][0];
					}
				}
				cout << (gsum+1)%10;
			}
			else
			{
				cout << 0;
			}
		}
		cout << "\n";
	}
}
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
using namespace std;
vector <vector <int>> v;
vector <vector <int>> dex;
queue <pair<int, int>> q;
queue <pair<int, int>> qv;
int a, b;
void def(int y, int x);
int main()
{
	
	cin >> a >> b;
	dex.resize(a, vector <int>(b, 0));
	v.resize(a,vector <int>(b,0)); // [a][b] [y][x]
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			int t;
			cin >> t;
			v[i][j] = t;

		}
	}
	def(0, 0);
	
	int count = 0;
	while (q.size()!=0)
	{
		int full = q.size();
		qv = q;
		for (int i = 0; i < full; i++)
		{
			v[q.front().first][q.front().second] = 0;
			dex[q.front().first][q.front().second] = 0;
			q.pop();
		}
		for (int i = 0; i < full; i++)
		{
			def(qv.front().first, qv.front().second);
			qv.pop();
		}
		
		count++;
	}
	cout << count;

}
void def(int y,int x)
{
	if (v[y][x] == 0)
	{
		v[y][x] = -1;
	}
	else if (v[y][x] == 1)
	{
		dex[y][x]++;
		if (dex[y][x] >= 2)
		{
			q.push({ y,x });
		}
		return;
	}
	else if (v[y][x] == -1)
	{
		return;
	}



	if (y!=0)
	{
		def(y - 1, x);
	}
	if (x != 0)
	{
		def(y, x-1);
	}
	if (y != a-1)
	{
		def(y +1, x);
	}
	if (x != b-1)
	{
		def(y, x + 1);
	}
}
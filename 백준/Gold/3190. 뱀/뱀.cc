#include <iostream>
#include <queue>
#include <vector>

using namespace std;
vector < vector <int>> V;
int n;
queue <pair<int, int>> tail;
int check(int x,int y)
{
	if (x < 0 || x >= n || y < 0 || y >= n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{

	cin >> n;
	int a, b;
	int ro = 0;
	int time = 0;
	cin >> a;
	V.resize(n,vector<int>(n,0));
	for (int i = 0; i < a; i++)
	{
		int t1, t2;
		cin >> t1>> t2;
		t1--; t2--;
		V[t2][t1] = 1;
	}
	cin >> b;
	int x=0, y=0;
	int ht[4] = { 1,0,-1,0 };
	int hu[4] = { 0,-1,0,1 };
	V[0][0] = 2;
	tail.push({0,0});
	for (int i = 0; i < b; i++)
	{
		int t;
		char d;
		
		cin >> t >> d;

			for (int j = time; j < t; j++)
			{
				time++;
				if (check(x +ht[ro], y + hu[ro]))
				{
					cout << time;
					exit(0);
				}
				if (V[x + ht[ro]][y + hu[ro]]==2)
				{
					cout << time;
					exit(0);
				}
				if (V[x + ht[ro]][y + hu[ro]] != 1)
				{
					
					V[tail.front().first][tail.front().second] = 0;
					tail.pop();
				}
				V[x + ht[ro]][y + hu[ro]] = 2;
				
				tail.push({ x + ht[ro],y + hu[ro] });
				x += ht[ro];
				y += hu[ro];
				
			}


		if (d == 'L')
		{
			ro++;
			ro %= 4;
		}
		if (d == 'D')
		{
			ro--;
			ro += 4;
			ro %= 4;
		}

	}
	while(1)
	{
		time++;
		if (check(x + ht[ro], y + hu[ro]))
		{
			cout << time;
			exit(0);
		}
		if (V[x + ht[ro]][y + hu[ro]] == 2)
		{
			cout << time;
			exit(0);
		}
		if (V[x + ht[ro]][y + hu[ro]] != 1)
		{

			V[tail.front().first][tail.front().second] = 0;
			tail.pop();
		}
		V[x + ht[ro]][y + hu[ro]] = 2;

		tail.push({ x + ht[ro],y + hu[ro] });
		x += ht[ro];
		y += hu[ro];

	}

	cout << time;
}
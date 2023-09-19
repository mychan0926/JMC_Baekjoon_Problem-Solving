#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <queue>
#include <stack>
using namespace std;
vector <vector <int>> v;
vector <int> gh;
queue < int >q;
stack <int> qwq;
int main()
{
	int a, b, c;
	cin >> a >> b;
	vector <int> g;
	gh.resize(a+1,0);
	v.resize(a+1, vector <int>());
	for (int i = 0; i < b; i++)
	{
		g.clear();
		int t;
		cin >> t;
		g.resize(t,0);
		for (int j = 0; j < t; j++)
		{
			int t1;
			cin >> t1;
			g[j]=t1;
		}

		for (int j = 0; j < t-1; j++)
		{
			v[g[j + 1]].push_back(g[j]);
			gh[g[j]]++;
		}
	}

	for (int j = 0; j < a; j++)
	{
		if (gh[j + 1] == 0)
		{
			q.push(j+1);
		}
	}
	int ghg = 0;
	while (1)
	{
		if (q.size() == 0&&ghg!=a)
		{
			cout << 0;
			exit(0);
			break;
		}
		if (ghg < a)
		{
			ghg++;
			int t = q.front();
			q.pop();
			qwq.push(t);
			for (int i = 0; i < v[t].size(); i++)
			{
				gh[v[t][i]]--;
				if (gh[v[t][i]] == 0)
				{
					q.push(v[t][i]);
				}
				
			}

		}
		else
		{
			break;
			}
	}
	while (qwq.size())
	{
		cout << qwq.top()<<" ";
		qwq.pop();
	}

}

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <queue>


using namespace std;

queue <int> q;

int main()
{
	int N, M;
	cin >> N >> M;
	vector <vector <int>> v(N+1,vector<int>());
	vector <int> c(N+1,0);
	vector <int> g;
	for (int i = 0; i < M; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		v[t2].push_back(t1);
		c[t1]++;
	}

	for(int i=0;i<N;i++)
	{
		if (c[i + 1] == 0)
		{
			q.push(i+1);
		}
	}
	while (1)
	{
		if (q.size() == 0)
		{
			break;
		}
		else
		{
			int t = q.front();
			q.pop();
			if (v[t].size()==0)
			{
				g.push_back(t);
			}
			else
			{
				for (int i = 0; i < v[t].size(); i++)
				{
					int gt = v[t][i];
					c[gt]--;
					if (c[gt] == 0)
					{
						q.push(gt);
					}
					
				}
				g.push_back(t);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << g[N-i-1]<<" ";
	}
	
}
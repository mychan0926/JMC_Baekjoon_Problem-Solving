#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
using namespace std;
queue <pair<int,int>> q;
vector<int> v(200002, 1000000);


int main()
{
	int a, b;
	cin >> a >> b;
	q.push({a,0});
	while (1)
	{
		if (q.size() == 0)
		{
			break;
		}

		int i= q.front().first;
		int j = q.front().second;
		q.pop();

		if (v[i] < j)
		{
			continue;
		}
		else
		{
			v[i] = j;
		}

		if (i != b)
		{
			if (i * 2 <= b*2)
			{
				q.push({ i * 2,j + 1 });
			}
			if (i + 1 <= b)
			{
				q.push({ i + 1,j + 1 });
			}
			if (i != 0)
			{
				q.push({ i - 1,j + 1 });
			}
		}
	}
	cout << v[b];
}
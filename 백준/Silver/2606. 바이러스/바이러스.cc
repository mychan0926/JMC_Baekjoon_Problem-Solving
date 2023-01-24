#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int a, b, c, d, N, M=0;

	cin >> N >> a;
	vector <vector <int>> s(N+1);
	vector <int> true_list(N+1,0);
	queue <int> check_list;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		s[b].push_back(c);
		s[c].push_back(b);
	}
	true_list[1]=1;
	check_list.push(1);
	while (1)
	{
		if (check_list.size() == 0)
		{
			break;
		}
		else
		{
			d=check_list.front();
			check_list.pop();
			for (int i = 0; i < s[d].size(); i++)
			{
				if (true_list[s[d][i]] == 0)
				{
					true_list[s[d][i]] = 1;
					check_list.push(s[d][i]);
					M++;
				}
			}


		}
		


	}
	cout << M;

}
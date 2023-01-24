#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
using namespace std;
int N, M;
vector <vector <int>> V;
multiset<int> s;
queue <pair<int, int>> list;
void check_link(int x, int y, int count)
{
	if (V[y][x] == 1)
	{

		int tmp = 0;
		V[y][x] = 0;
		if (y != 0)
		{
			if (V[y - 1][x] == 1)
			{

				list.push(make_pair(y - 1, x));
				tmp++;
			}
		}
		if (y != N - 1)
		{
			if (V[y + 1][x] == 1)
			{
				list.push(make_pair(y + 1, x));
				tmp++;
			}
		}
		if (x != 0)
		{
			if (V[y][x - 1] == 1)
			{
				list.push(make_pair(y, x - 1));
				tmp++;
			}
		}
		if (x != N - 1)
		{
			if (V[y][x + 1] == 1)
			{
				list.push(make_pair(y, x + 1));
				tmp++;
			}
		}

		if (list.size() != 0)
		{
			int first = list.front().first;
			int second = list.front().second;
			list.pop();
			check_link(second, first, count + 1);

		}
		else
		{
			s.insert(count + 1);
		}
	}
	else
	{
		if (list.size() != 0)
		{
			int first = list.front().first;
			int second = list.front().second;
			list.pop();
			check_link(second, first, count);

		}
		else
		{
			s.insert(count);
		}
	}
	
	


	return;
}

int main()
{


	cin >> N;

	for (int i=0;i<N; i++)
	{
		vector<int> tmp_v;
		string tmp_s;
		cin >> tmp_s;
		for (int j = 0; j < N; j++)
		{
			tmp_v.push_back(tmp_s[j]-'0');
		}
		V.push_back(tmp_v);
	}
	int i = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (V[i][j] == 1)
			{
				check_link(j, i, 0);

			}

		}
	}
	cout << s.size()<<"\n";

	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "\n";
	}

}
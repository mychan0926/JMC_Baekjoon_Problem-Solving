#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector <string> name;
vector < vector <int> > v;
vector < vector <int> > table1;
vector < vector <int> > table2;
int a, b, c;

queue <int> q;
int cycle_check(vector <int> aa, int bb)
{
	for (int i = 0; i < table1[bb].size(); i++)
	{
		if (aa[table1[bb][i]] == 1)
		{
			cout << "Paradoxe Absurdo";
			exit(0);
		}
		else
		{
			aa[table1[bb][i]] = 1;
			cycle_check(aa, table1[bb][i]);
			aa[table1[bb][i]] = 0;
		}
	}
	return 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a;
	vector <int> counting(a, 0);
	for (int i = 0; i < a; i++)
	{
		string t;
		int ta, tb, tc;
		cin >> t >> ta >> tb >> tc;
		name.push_back(t);
		v.push_back({ ta,tb,tc });

	}
	table1.resize(a, vector<int>());
	table2.resize(a, vector<int>());
	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			int apoint = 0, bpoint = 0;
			for (int k = 0; k < 3; k++)
			{
				if (v[i][k] == v[j][k])
				{
					apoint++;
					bpoint++;
				}
				else if (v[i][k] > v[j][k])
				{
					apoint++;
				}
				else if (v[i][k] < v[j][k])
				{
					bpoint++;
				}
			}
			if (apoint > bpoint)
			{
				table1[i].push_back(j);
				table2[j].push_back(i);
				counting[j]++;
			}
			else if (apoint < bpoint)
			{
				table1[j].push_back(i);
				table2[i].push_back(j);
				counting[i]++;
			}

		}
	}
	vector <string> winner;
	int point_size = a;
	for (int i = 0; i < a; i++)
	{
		if (counting[i]==0)
		{
			q.push(i);
			winner.push_back(name[i]);
		}
	}


	while (point_size)
	{
		if (q.size() == 0)
		{
			cout << "Paradoxe Absurdo";
			exit(0);
		}
		int index = q.front();
		q.pop();
		point_size--;
		for (int i = 0; i < table1[index].size(); i++)
		{
			counting[table1[index][i]]--;

			if (counting[table1[index][i]] == 0)
			{
				q.push(table1[index][i]);
			}
		}
	}

	sort(winner.begin(),winner.end());
	for (int i = 0; i < winner.size(); i++)
	{
		cout << winner[i]<<"\n";
	}




	//for (int i = 0; i < a; i++)
	//{
	//	for (int j = 0; j < a; j++)
	//	{
	//		cout << table[i][j]<<" ";
	//	}
	//	cout << "\n";
	//}

}
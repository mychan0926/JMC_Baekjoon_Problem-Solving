#include <iostream>
#include <set>
#include <vector>

using namespace std;

int a, b, c, d, n, m;
vector <vector <int>> v;
vector <vector <int>> party;
vector <int> know;
void def(int i);
int main()
{

	cin >> a >> b;
	//a 사람수 b 파티수
	v.resize(a+1, vector <int> (a+1,0) );
	know.resize(a+1,0);
	know[0] = 1;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> d;
		know[d] = 1;
	}

	for (int i = 0; i < b; i++)
	{
		int t1;
		vector <int>tem;
		cin >> t1;
		for (int j = 0; j < t1; j++)
		{
			int t2;
			cin >> t2;
			tem.push_back(t2);

		}
		party.push_back(tem);
	}
	for (int i = 0; i < party.size(); i++)
	{
		for (int j = 0; j < party[i].size(); j++)
		{
			for (int k = 0; k < party[i].size(); k++)
			{
				v[party[i][k]][party[i][j]] = 1;
				v[party[i][j]][party[i][k]] = 1;
			}
		}
	}
	for (int i = 0; i < know.size(); i++)
	{
		if (know[i] == 1)
		{
			def(i);
		}
		
	}
	int count = 0;
	for (int i = 0; i < party.size(); i++)
	{
		bool t = 0;
		for (int k = 0; k < party[i].size(); k++)
		{
			
			for (int j = 0; j < know.size(); j++)
			{
				if (know[party[i][k]] == 0)
				{
					t = 1;
				}
			}
		}
		if (t == 1)
		{
			count++;
		}
	}
	cout << count;
}

void def(int i)
{
	if (v[i][i] == 1)
	{
		v[i][i] = 0;
		for (int j = 0; j < v[i].size(); j++)
		{
			if (v[i][j] == 1)
			{
				know[j] = 1;
				def(j);
			}
			
		}
	}
	else
	{
		return;
	}

}
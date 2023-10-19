#include <iostream>
#include <vector>
using namespace std;


vector <vector <int>> v;
vector <int> list;

int check(int a,int b)
{
	int t1 = a;
	int t2 = b;

	while (1)
	{
		if (t1 == list[t1])
		{
			break;
		}
		else
		{
			t1 = list[t1];
		}
	}
	while (1)
	{
		if (t2 == list[t2])
		{
			break;
		}
		else
		{
			t2 = list[t2];
		}
	}

	if (t1 == t2)
	{
		return 1;
	}
	else
	{
		list[t1] = t2;
		return 0;
	}

}


int main()
{
	int N, M;
	cin >> N>>M;
	v.resize(N, vector <int>(N,0));
	list.resize(N,0);
	for (int i = 0; i < N; i++)
	{
		list[i] = i;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int t;
			cin >> t;
			v[i][j] = t;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (v[i][j] == 1)
			{
				check(i,j);
			}
		}
	}
	vector <int> in;
	for (int i = 0; i < M; i++)
	{
		int T;
		cin >> T;
		in.push_back(T-1);
	}
	for (int i = 0; i < M-1; i++)
	{
		if (check(in[i], in[i + 1]) != 1)
		{
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";

}
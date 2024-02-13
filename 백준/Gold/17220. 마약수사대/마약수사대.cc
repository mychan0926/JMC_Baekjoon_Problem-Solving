#include <iostream>
#include <vector>
#include <math.h>
#define  ll long long

using namespace std;
vector < vector <int>> V;
vector <int> check;
vector <int> check1;
int a, b;
void func(int t)
{
	if (check[t] == 0)
	{
		check1[t] == 1;
		for (int i = 0; i < a; i++)
		{
			if (V[t][i] == 1)
			{
				check[i]--;
				V[t][i] = 0;
				func(i);
			}
		}
	}
}

int main()
{

	cin >> a >> b;
	V.resize(a,vector<int>(a,0));
	check.resize(a,0);
	check1.resize(a, 0);
	for (int i = 0; i < b; i++)
	{
		char t1,t2;
		cin >> t1 >> t2;
		V[t1 - 'A'][t2 - 'A'] = 1;
		check[t2 - 'A']++;
	}
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		char t1;
		cin >> t1;
		check1[t1 - 'A'] = 1;
		check[t1-'A'] = 0;
		func(t1 - 'A');
		
	}
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		if (check[i] > 0&&check1[i]!=1)
		{
			sum++;
		}
	}
	cout << sum;
}

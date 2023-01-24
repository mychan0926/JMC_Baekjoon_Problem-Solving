#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;


int main()
{
	int a, b, c, d, e;
	int full_size = 'z'-'a'+1;
	int found_up(int i, vector <int> &v, int s, int e);
	string T1, S1;
	cin >> S1 >> T1;
	vector <vector <int>> T(full_size, vector <int>());
	vector <int> T_size(full_size,0);
	for (int i = 0; i < T1.size(); i++)
	{
		T[T1[i] - 'a'].push_back(i);
	}
	for (int i = 0; i < full_size; i++)
	{
		T_size[i]=T[i].size();
	}
	int idx = -1;
	int count = 1;
	for (int i = 0; i < S1.size(); i++)
	{
		int tem = S1[i] - 'a';
		if (T[tem].size() == 0)
		{
			cout << -1;
			exit(0);
		}
		int result= found_up(idx, T[tem], 0, T[tem].size() - 1);

		if ( result== idx)
		{
			count++;

		}
		else if (result < idx)
		{
			count++;
			idx = T[tem][0];
		}
		else if (result > idx)
		{
			idx = result;
		}
	}
	cout << count;



}
int found_up(int i, vector <int>& v, int s, int e)
{

	if (s == e)
	{
		if (v[s] <= i)
		{
			return v[0];
		}
		else
		{
			return v[s];
		}

	}
	else if (v[(e + s) / 2] > i)
	{
		return found_up(i, v, s, (e + s) / 2);
	}
	else if (v[(e + s) / 2] < i)
	{
		return found_up(i, v, (e + s) / 2 + 1, e);
	}
	else
	{
		if (((e + s) / 2) + 1 < v.size())
		{
			return v[(e + s) / 2 + 1];
		}
		else
		{
			return v[0];
		}
	}
}
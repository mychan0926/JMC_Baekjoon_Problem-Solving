#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>
#define ll long long
using namespace std;
vector<vector<vector<int>>> v;
int a, b;
int gt(int i,int j,int num)
{
	if (v[i][j][1] == 0)
	{
		v[i][j][1] = num;
		if (v[i][j][0] == 0)
		{
			if (i == 0)
			{
				return 1;
			}
			else
			{
				return gt(i-1,j, num);
			}


		}
		if (v[i][j][0] == 1)
		{
			if (i == a-1)
			{
				return 1;
			}
			else
			{
				return gt(i + 1, j, num);
			}


		}
		if (v[i][j][0] == 2)
		{
			if (j == 0)
			{
				return 1;
			}
			else
			{
				return gt(i, j-1, num);
			}


		}
		if (v[i][j][0] == 3)
		{
			if (j == b-1)
			{
				return 1;
			}
			else
			{
				return gt(i, j + 1,num);
			}


		}
	}
	else
	{
		if (v[i][j][1] == num)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
	}
	
}


int main()
{

	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		string s;
		cin >> s;
		vector <vector<int>> t;
		for (int j = 0; j < b; j++)
		{
			
			if (s[j] == 'U')
			{
				t.push_back({ 0 ,0});
			}
			else if (s[j] == 'D')
			{
				t.push_back({ 1 ,0 });
			}
			else if (s[j] == 'L')
			{
				t.push_back({ 2 ,0 });
			}
			else if (s[j] == 'R')
			{
				t.push_back({ 3 ,0 });
			}
			
		}
		v.push_back(t);
	}
	int count = 0;
	int full = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			full++;
			if (v[i][j][1] == 0)
			{
				
				count+=gt(i, j,full);

			}
		}
	}
	cout << count;
}
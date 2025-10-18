#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>


using namespace std;
int n;
vector <vector <int>> v;
vector <int> left_up;
vector <int> right_up;
int sum = 0;
int cutline = 0;
void bishop(int count,int index)
{
	if (sum>(2 * n - 1)-count+index)
	{
		return;
	}
	if (count == 2*n-1)
	{
		if (sum < index)
		{
			sum = index;
		}
		return;
	}
	int line_num=count + 1 - n;
	int tmp = abs(line_num);
	if (line_num > 0)
	{

		for (int i = 0; i < n - tmp; i++)
		{
			if (v[i][i + tmp] == 1)
			{
				if (right_up[i + i + tmp] == 0)
				{
					right_up[i + i + tmp] = 1;
					bishop(count + 1,index+1);
					right_up[i + i + tmp] = 0;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < n-tmp; i++)
		{
			if (v[tmp + i][i] == 1)
			{
				if (right_up[i + i + tmp] == 0)
				{
					right_up[i + i + tmp] = 1;
					bishop(count + 1, index + 1);
					right_up[i + i + tmp] = 0;
				}
			}
		}
		
	}
	bishop(count + 1, index);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	v.resize(n,vector<int>(n,0));
	left_up.resize(n+n,0);
	right_up.resize(n + n,0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>v[i][j];
		}
	}
	bishop(0,0);
	cout << sum;
}


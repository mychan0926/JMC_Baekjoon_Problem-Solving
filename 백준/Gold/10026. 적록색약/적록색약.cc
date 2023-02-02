#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
vector <vector <char>> nomal;
vector <vector <char>> sp;
vector <vector <int> > v1;
vector <vector <int> > v2;
void check1(int i, int j);
void check2(int i, int j);
int a, b, c, d, n, m,count1=0,count2=0;

int main()
{


	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string t;
		vector <char> tem;
		vector <char> tem2;
		cin >> t;
		for (int j = 0; j < n; j++)
		{
			tem.push_back(t[j]);
			if (t[j] == 'G')
			{
				tem2.push_back('R');
			}
			else
			{
				tem2.push_back(t[j]);
			}
			
		}
		nomal.push_back(tem);
		sp.push_back(tem2);

	}
	v1.resize(n, vector <int>(n, 0));
	v2.resize(n, vector <int>(n, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v1[i][j] == 0)
			{
				check1(i, j);
				count1++;
			}
		}

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v2[i][j] == 0)
			{
				check2(i, j);
				count2++;
			}
		}

	}
	cout << count1<<" "<<count2;


}
void check1(int i,int j)
{
	char tem = nomal[i][j];
	if (v1[i][j] == 0)
	{
		v1[i][j] = 1;
		if (i-1 >= 0 && nomal[i-1][j]==tem)
		{
			check1(i - 1, j);
		}
		if (i+1 < n && nomal[i+1][j] == tem)
		{
			check1(i + 1, j);
		}
		if (j - 1 >= 0 && nomal[i][j - 1] == tem)
		{
			check1(i , j - 1);
		}
		if (j + 1 < n && nomal[i][j+1] == tem)
		{
			check1(i, j + 1);
		}

	}
	else
	{
		return;
	}
	
}
void check2(int i, int j)
{
	char tem = sp[i][j];
	if (v2[i][j] == 0)
	{
		v2[i][j] = 1;
		if (i - 1 >= 0 && sp[i - 1][j] == tem)
		{
			check2(i - 1, j);
		}
		if (i + 1 < n && sp[i + 1][j] == tem)
		{
			check2(i + 1, j);
		}
		if (j - 1 >= 0 && sp[i][j - 1] == tem)
		{
			check2(i, j - 1);
		}
		if (j + 1 < n && sp[i][j + 1] == tem)
		{
			check2(i, j + 1);
		}

	}
	else
	{
		return;
	}

}
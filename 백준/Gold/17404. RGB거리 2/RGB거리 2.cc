#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <set>
#include <map>
using namespace std;

int N;
vector <vector <int>> color;
vector <int> list;
vector <vector <vector <int>>> save;
int minn = 1000 * 1000 * 1000*10;
void df(int first,int sum, int count,int state)
{
	if (count == N - 3)
	{
		if (save[count][first][state] > sum + color[count][state])
		{
			save[count][first][state] = sum + color[count][state];
		}
		else
		{
			return;
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i != state)
				{
					if (j != first && j != i)
					{
						if (save[count][first][state] + color[count + 1][i] + color[count + 2][j] < minn)
						{
							minn = save[count][first][state] + color[count + 1][i] + color[count + 2][j];
						}
					}
				}
			}
		}
	}
	else
	{
		if (save[count][first][state] > sum + color[count][state])
		{
			save[count][first][state] = sum + color[count][state];
		}
		else
		{
			return;
		}
		for (int i = 0; i < 3; i++)
		{
			if (i != state)
			{
				df(first, sum + color[count][state], count + 1, i);
			}
			
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		vector <int>t = { a,b,c };
		color.push_back(t);
	}
	save.resize(N, vector<vector<int>>(3, vector <int>(3,1000*1000*1000)));
	if (N >= 4)
	{
		
		
		df(0, color[0][0], 1, 1);
		df(1, color[0][1], 1, 2);
		df(2, color[0][2], 1, 0);
		df(0, color[0][0], 1, 2);
		df(1, color[0][1], 1, 0);
		df(2, color[0][2], 1, 1);
	
	}
	else if(N==3)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					if (i != k && i != j && j != k)
					{
						if (minn > color[0][i] + color[1][j] + color[2][k])
						{
							minn = color[0][i] + color[1][j] + color[2][k];
						}
					}
				}
			}
		}
	}
	else if(N==2)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if ( i != j)
				{
					if (minn > color[0][i] + color[1][j])
					{
						minn = color[0][i] + color[1][j];
					}
				}
			}
		}
	}
	cout << minn;
}
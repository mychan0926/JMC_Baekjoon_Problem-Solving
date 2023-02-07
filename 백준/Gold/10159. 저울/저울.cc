#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> v;
vector <vector <int>> v1;
int a, b, c, d, n, m = 0;

int main()
{

	cin >> a;
	v.resize(a + 1, vector<int>(a + 1, 0));
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> c >> d;
		v[c][d] = 1;
		v[d][c] = -1;
	}
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			for (int k = 1; k <= a; k++)
			{
				if (i!=j&&j!=k&&k!=i&&v[i][j]>0 && v[j][k] > 0)
				{
					v[i][k] = max(v[i][k], max(v[i][j],v[j][k]))+1;
				}
				if (i != j && j != k && k != i && v[j][i] < 0 && v[k][j] < 0)
				{
					v[k][i] = min(v[k][i],min(v[j][i], v[k][j]))-1;
				}
				
			}
		}
	}
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			for (int k = 1; k <= a; k++)
			{
				if (i != j && j != k && k != i && v[i][j] > 0 && v[j][k] > 0)
				{
					v[i][k] = max(v[i][k], max(v[i][j], v[j][k])) + 1;
				}
				if (i != j && j != k && k != i && v[j][i] < 0 && v[k][j] < 0)
				{
					v[k][i] = min(v[k][i], min(v[j][i], v[k][j])) - 1;
				}

			}
		}
	}
	for (int i = 1; i <= a; i++)
	{
		int count = 0;
		for (int j = 1; j <= a; j++)
		{
			if (v[i][j] == 0)
			{
				count++;
			}

		}
		cout << count - 1<<"\n";

	}

}
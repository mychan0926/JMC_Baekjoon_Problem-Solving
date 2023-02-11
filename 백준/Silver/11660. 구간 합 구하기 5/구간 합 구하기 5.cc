#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int a, b, c, d;
vector< vector< int>> v;
vector< vector< int>> x;
vector< vector< int>> y;
vector< vector< int>> box;
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	cin >> a >> b;
	x.resize(a+1,vector< int>(a+1,0));
	y.resize(a+1, vector< int>(a+1, 0));
	box.resize(a+1, vector< int>(a+1, 0));
	vector<int>tmr(a+1,0);
	v.push_back(tmr);
	for (int i = 0; i < a; i++)
	{
		vector <int> t;
		t.push_back(0);
		for (int j = 0; j < a; j++)
		{
			int tem;
			cin >> tem;
			t.push_back(tem);
		}
		v.push_back(t);
	}
	for (int j = 0; j <= a; j++)
	{
		for (int i = 0; i <= a; i++)
		{
			if (j != 0)
			{
				y[i][j] = v[i][j] + y[i][j - 1];
			}
			else
			{
				y[i][j] = v[i][j];
			}


		}
	}
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= a; j++)
		{
			if (j == 0)
			{
				if (i == 0)
				{
					box[i][j] = v[i][j] ;
				}
				else
				{
					box[i][j] = y[i][j] + box[i - 1][j];
				}
				
			}
			else
			{
				box[i][j] = box[i][j - 1] + y[j][i];
			}
			


		}
	}
	for (int i = 0; i < b; i++)
	{
		int x1, x2, y1, y2;

		cin >> x1 >> y1 >> x2 >> y2;
			cout << box[y2][x2] - box[y1 - 1][x2] - box[y2][x1 - 1] + box[y1 - 1][x1 - 1] << "\n";

	}
}
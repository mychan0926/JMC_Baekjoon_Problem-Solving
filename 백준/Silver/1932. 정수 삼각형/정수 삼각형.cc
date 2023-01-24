#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int a, b, c, n, m;
	vector <vector <int>> v;

	cin >> a;
	vector<int> s;
	for (int i = 0; i < a; i++)
	{
		vector <int> tem;
		for (int j = 0; j < i+1; j++)
		{
			int t;
			cin >> t;
			tem.push_back(t);

		}
		v.push_back(tem);

	}
	vector <int> back(1, 0);
	for (int i = 0; i < a; i++)
	{
		vector <int> tem(i+1,0);
		for (int j=0;j<v[i].size();j++)
		{
			if (j == 0)
			{
				tem[j] = back[j] + v[i][j];
			}
			else if(j==v[i].size()-1)
			{
				tem[j] = back[j-1] + v[i][j];
			}
			else
			{
				tem[j] = max(back[j - 1] + v[i][j], back[j] + v[i][j]);
			}
			
		}
		back = tem;
	}
	int bigger = 0;
	for (int i = 0; i < back.size(); i++)
	{
		if (back[i] > bigger)

		{
			bigger = back[i];
		}
	}
	cout << bigger;
}

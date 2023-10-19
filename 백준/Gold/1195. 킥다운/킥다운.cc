#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector <int> v1;
vector <int> v2;

int main()
{
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		v1.push_back(a[i] - '0');
		v2.push_back(0);
	}
	for (int i = 0; i < b.size(); i++)
	{
		v2.push_back(b[i] - '0');
	}
	for (int i = 0; i < a.size(); i++)
	{
		v2.push_back(0);
	}


	int min = 2147483600;
	vector <int> gt;
	for (int i = 0; i < v2.size() - v1.size(); i++)
	{
		gt=v2;

		int g = 0;
		int counting = 0;
		for (int j = 0; j < v1.size(); j++)
		{
			if (v1[j] == 2 && v2[i+j] == 2)
			{
				g = 1;
				break;
			}
			else
			{
				if (v1[j]!=0||v2[j+i]!=0)
				{
					gt[j + i] = 1;
				}
			}
		}
		

		if (g == 1)
		{
			continue;
		}
		else
		{
			for (int i = 0; i < gt.size(); i++)
			{
				if (gt[i] != 0)
				{
					counting++;
				}
			}
			if (counting < min)
			{
				min = counting;
			}
		}

	}
	cout << min;
}
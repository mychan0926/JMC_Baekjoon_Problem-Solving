#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int check(string a,string b)
{
	string t;
	if (a.size() > b.size())
	{
		t = a;
		a = b;
		b = t;
	}
	int index = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == b[i])
		{
			index++;
		}
		else
		{
			return index;
		}
	}

	if (a.size() == b.size())
	{
		return 0;
	}
	return index;

}

int main()
{
	vector <pair<string, int>> v;
	int a;

	cin >> a;
	for (int i = 0; i < a; i++)
	{
		string t;
		cin >> t;
		v.push_back({ t,i });
	}
	vector <pair<string, int>> g=v;
	int max = 0;
	int a1 = 0;
	int a2 = 0;
	sort(v.begin(),v.end());
	for (int i=0;i<v.size()-1;i++)
	{
		int j = i+1;
		int tmax = 0;
		int h = 0;
		while(j<v.size())
		{
			int index = check(v[i].first, v[j].first);
			int b1, b2;
			if (tmax < index)
			{
				tmax = index;
			}
			else if (tmax>index)
			{
				break;
			}
			if (v[i].second > v[j].second)
			{
				b1 = v[j].second;
				b2 = v[i].second;
			}
			else
			{
				b2 = v[j].second;
				b1 = v[i].second;
			}
			if (j != i + 1)
			{
				if(tmax + 1 < v[j - 1].first.size()&& tmax + 1 < v[j].first.size())
				{
					if (v[j - 1].first[tmax + 1] == v[j].first[tmax + 1])
					{
						break;
					}
				}
				
			}
			

			if (max < index)
			{
				max = index;

				a1 = b1;
				a2 = b2;

			}
			else if (max == index)
			{

				if (a1 > b1)
				{
					a1 = b1;
					a2 = b2;
				}
				else if (a1 == b1)
				{
					if (a2 > b2)
					{
						a1 = b1;
						a2 = b2;
					}
				}

			}
			j++;
		}

	}

	std::cout<< g[a1].first << "\n" << g[a2].first;

}

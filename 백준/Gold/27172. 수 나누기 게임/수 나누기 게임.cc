#include <iostream>
#include <vector>
#define ll long long
using namespace std;

vector<int>v(1000001, 0);
vector<int>v1(1000001, 0);
vector<int>va;

vector<int>v2(1000001, 0);
int main() 
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		va.push_back(t);
		v[t] = 1;
	}
	for (int i = 0; i <va.size(); i++)
	{
			for (int j = 2; j <=1000000/va[i]; j++)
			{
				v1[j * va[i]]+= -1;
				if (v[j * va[i]] == 1)
				{
					v1[va[i]] += 1;
				}
			}


	}
	for (int i = 0; i < va.size(); i++)
	{
		cout << v1[va[i]]<<" ";
	}

}
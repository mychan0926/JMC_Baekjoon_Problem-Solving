#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int a, b, c, d;
vector <int> index;
vector <int> dex;
vector <int> e;
vector <string> tm;
map <string, int> m;
void p(int i, int count);
int main() {

	cin >> a>>b;
	for (int i = 0; i < a; i++)
	{
		int t;
		cin >> t;
		dex.push_back(t);
	}
	index.resize(a,0);
	sort(dex.begin(), dex.end());
	p(0,0);
	for (auto i = tm.begin(); i != tm.end(); i++)
	{
		cout << *i<<"\n";
	}
}

void p(int i,int count)
{
	if (b == count)
	{
		
		string tmp = "";
		for (int j = 0; j < e.size(); j++)
		{
			if (e[j])
			{
				tmp+=to_string(e[j]);
				tmp.push_back(' ');
			}
			
		}
		if (m[tmp] == 0)
		{
			tm.push_back(tmp);
			m[tmp] = 1;
		}
		
	}
	else
	{
		for (int j = 0; j < dex.size(); j++)
		{
			if (index[j] != 1)
			{
				index[j] = 1;
				e.push_back(dex[j]);
				p(j, count + 1);
				e.pop_back();
				index[j] = 0;
			}
				
		}
	}
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a, b, c, d;
vector <int> index;
vector <int> check;
vector <int> dex;
void p(int count);
int main() {

	cin >> a>>b;
	check.resize(a,0);
	for (int i = 0; i < a; i++)
	{
		int t;
		cin >> t;
		dex.push_back(t);
	}
	sort(dex.begin(),dex.end());
	p(0);
	
}

void p(int count)
{
	if (b == count)
	{
		for (int j = 0; j < index.size(); j++)
		{
			cout << index[j]<<" ";
		}
		cout << "\n";
	}
	else
	{
		for (int j = 0; j < dex.size(); j++)
		{
			if (check[j] != 1)
			{
				index.push_back(dex[j]);
				check[j] = 1;
				p(count + 1);
				index.pop_back();
				check[j] = 0;
			}
			
		}
	}
}
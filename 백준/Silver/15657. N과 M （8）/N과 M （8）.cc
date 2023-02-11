#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a, b, c, d;
vector <int> index;

vector <int> dex;
void p(int i,int count);
int main() {

	cin >> a>>b;
	for (int i = 0; i < a; i++)
	{
		int t;
		cin >> t;
		dex.push_back(t);
	}
	sort(dex.begin(),dex.end());
	p(0,0);
	
}

void p(int i,int count)
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
		for (int j = i; j < dex.size(); j++)
		{
			index.push_back(dex[j]);
			p(j,count+1);
			index.pop_back();
		}
	}
}
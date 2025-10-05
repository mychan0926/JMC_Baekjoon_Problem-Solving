#include <iostream>
#include <vector>

using namespace std;
int main()
{
	string a;
	cin >> a;
	string v = "MOBIS";
	for (auto k : a)
	{
		for (int i=0;i<v.size();i++)
		{
			if (k==v[i])
			{
				v.erase(v.begin()+i);
			}

		}
	}
	cout << ((v.size()==0) ? "YES" : "NO");
}
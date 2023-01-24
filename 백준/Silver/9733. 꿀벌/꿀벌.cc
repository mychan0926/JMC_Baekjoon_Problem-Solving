#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	string t;
	map < string, int > s;
	vector <string> h;
	h = { "Re","Pt","Cc","Ea","Tb","Cm","Ex" };
	int count = 0;
	while (cin >> t)
	{
		s[t]++;
		count ++;
	}
	for (int i=0;i<h.size();i++)
	{
		
		cout << h[i] << " " << s[h[i]];
		printf(" %.2lf\n", float(s[h[i]]) / count);
	}
	cout << "Total "<< count << " 1.00";

}
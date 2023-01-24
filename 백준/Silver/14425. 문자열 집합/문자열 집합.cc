#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
	
	int a, b, c, N, M;
	c = 0;
	set <string> s;
	cin >> a>>b;
	for (int i = 0; i < a; i++)
	{
		string f;
		char f1[600];
		scanf("%s", f1);
		f = f1;
		s.insert(f);
	}
	
	for (int i = 0; i < b; i++)
	{
		string f;
		char f1[600];
		scanf("%s", f1);
		f = f1;
		if (s.find(f1) != s.end())
		{
			c++;
		}
	}
	cout << c;


}
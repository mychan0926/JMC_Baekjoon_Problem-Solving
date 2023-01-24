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
	set <string> s1;
	cin >> a >> b;
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
			s1.insert(f);
		}
	}
	cout << c<<"\n";
	for (set<string>::iterator i = s1.begin(); i !=s1.end(); i++)
	{
		cout << *i << "\n";
	}
	


}
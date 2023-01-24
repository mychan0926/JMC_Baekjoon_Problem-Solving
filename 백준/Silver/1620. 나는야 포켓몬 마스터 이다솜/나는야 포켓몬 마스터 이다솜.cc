#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	
	int a, b, c, N, M;
	c = 0;
	map <string,int> s;
	map <int, string> s1;
	scanf("%d",&a);
	scanf("%d", &b);
	for (int i = 0; i < a; i++)
	{
		string f;
		char t[30];
		scanf("%s", &t);
		f = t;
		s.insert(make_pair(f, i + 1));
		s1.insert(make_pair(i+1, f));

	}
	for (int i = 0; i < b; i++)
	{
		string f;
		char t[30];
		scanf("%s", &t);
		f = t;
		
		
		if (f[0] >= '0' && f[0] <= '9')
		{
			cout << s1[stoi(f)] << "\n";
		}
		else 
		{
			cout << s[f] << "\n";
		}
	}


}
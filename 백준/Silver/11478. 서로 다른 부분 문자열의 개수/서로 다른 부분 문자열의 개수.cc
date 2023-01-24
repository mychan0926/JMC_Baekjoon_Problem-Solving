#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int a, b, c;
	string s;
	set <string> s1;
	cin >> s;
	for (int l = 1; l < s.size()+1; l++)
	{
		for (int i = 0; i < s.size()-l+1; i++)
		{
			string s2=s.substr(i, l);
			s1.insert(s2);
		}
		
	}
	cout << s1.size();


}
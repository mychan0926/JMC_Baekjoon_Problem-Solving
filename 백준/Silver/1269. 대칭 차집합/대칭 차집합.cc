#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{

	int a, b, c, N=0, M=0;
	c = 0;

	map <int,int> s;
	map <int,int> s1;

	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> c;
		s.insert(make_pair(c,1));
	}
	for (int i = 0; i < b; i++)
	{
		cin >> c;
		s1.insert(make_pair(c, 1));
	}


	for (map<int,int>::iterator i = s.begin(); i !=s.end() ; i++)
	{
		if (s1.find(i->first) != s1.end())
		{
			N++;
		}


	}

	M += a-N;
	N = 0;
	for (auto i = s1.begin(); i != s1.end(); i++)
	{
		if (s.find(i->first) != s.end())
		{
			N++;
			
		}
	}


	M += b - N;
	cout << M;
}
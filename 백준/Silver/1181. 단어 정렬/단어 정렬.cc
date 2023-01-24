#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <math.h>
using namespace std;

int main()
{
	int N, M;
	int a, b, c, d;
	set <vector<int>> s;
	string t;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> t;
		vector <int> s1;
		s1.push_back(t.size());
		for (int j = 0; j < t.size(); j++)
		{
			s1.push_back(t[j]);

		}
		s.insert(s1);
	}
	for (auto i=s.begin(); i != s.end(); i++)
	{
		for (int j = 1; j < (*i).size(); j++)
		{
			cout << (char)(*i)[j] ;
		}
		cout << "\n";
	}



}
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
	set < pair<pair<int, int>,string> > s;
	vector <int> search(201,0);

	string t;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a>>t;

		s.insert(make_pair(make_pair(a, search[a]), t));

		search[a] += 1;
	}
	for (auto i=s.begin(); i != s.end(); i++)
	{
		cout << ((*i).first).first<<" "<< (*i).second<<"\n";
	}



}
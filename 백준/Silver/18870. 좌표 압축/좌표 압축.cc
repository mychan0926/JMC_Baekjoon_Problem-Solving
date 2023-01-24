#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
	int N, M;
	int a, b, c, d;
	vector <int> original ;
	set <int> cs;
	unordered_map <int,int> s;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		cs.insert(a);
		original.push_back(a);
	}
	int h = 0;
	for (auto i = cs.begin(); i != cs.end(); i++)
	{
		s.insert(make_pair(*i, h));
		h++;

	}
	for (int i = 0; i < N; i++)
	{
		cout << s[original[i]] << " ";
	}
	




}
#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
	int a, b, c;
	int N, M,L=0;
	set <int> s;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int j;
		cin >> j;
		s.insert(j);
	}
	for (set<int> ::iterator i = s.begin(); i !=s.end(); i++)
	{
		cout << (* i);
		cout << "\n";
	}
	



}
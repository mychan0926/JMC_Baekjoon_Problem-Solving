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
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a>> b;
		s.insert({b,a});
	}
	for (auto i=s.begin(); i != s.end(); i++)
	{
		cout << (*i)[1]<<" "<< (*i)[0] <<"\n";
		
	}



}
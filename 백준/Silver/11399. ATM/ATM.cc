#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main()
{
	int a, b, c, d;
	cin >> a;
	multiset <int> e;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		e.insert(b);
	}
	int sum = 0;
	int stop = 0;
	for (auto  i = e.begin(); i !=e.end(); i++)
	{
		sum += *i+stop;
		stop += *i;
		
	}
	cout << sum;
}






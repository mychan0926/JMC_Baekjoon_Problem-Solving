#include <iostream>
#include <set>


using namespace std;
	
int main()
{
	set<int>s;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a = 0;
		cin >> a;
		s.insert(a);

	}
	for (set<int>::iterator i= s.begin(); i !=s.end(); i++)
	{
		cout << *i << "\n";

	}


}
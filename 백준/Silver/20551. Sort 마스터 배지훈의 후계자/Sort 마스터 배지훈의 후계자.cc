#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	multiset <int> s;
	vector <int> h;
	map <int,int> m;
	
	int a=0, b=0, c,d, n;
	cin >> a >> c;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		s.insert(b);
	}
	int tmp = 0;
	for (auto g = s.begin(); g != s.end(); g++)
	{
		if (m.count(*g)==0)
		{
			m[*g] = tmp+1;
		}
		tmp++;
	}
	for (int i = 0; i < c; i++)
	{
		cin >> tmp;
		if (m[tmp] == 0)
		{
			cout << -1 << "\n";
		}
		else
		{
			cout << m[tmp]-1<<"\n";
		}
	}


}
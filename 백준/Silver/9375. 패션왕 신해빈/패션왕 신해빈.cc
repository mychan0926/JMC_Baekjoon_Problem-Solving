#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int N, M, a, A=1;
	string c, d;
	map <string, int> s;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		s.erase(s.begin(),s.end());
		cin >> M;
		A = 1;
		for (int j = 0; j < M; j++)
		{

			cin >> c >> d;
			s[d]++;
		}
		for (auto i = s.begin(); i != s.end(); i++)
		{
			A*=(*i).second+1;
		}
		cout << A - 1 << "\n";
	}
	
}
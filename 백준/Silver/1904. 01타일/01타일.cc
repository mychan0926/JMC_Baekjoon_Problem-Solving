#include <iostream>
#include <vector>

using namespace std;
int N;
vector <int> s(1000001, 0);
int CW(long long int a)
{
	if (s[a] == 0)
	{
		if (a == 1)
		{
			return 1;
		}
		else if (a == 2)
		{
			return 2;
		}
		else
		{
			s[a - 1] = CW(a - 1) % 15746;
			s[a - 2] = CW(a - 2) % 15746;
			return s[a - 1] + s[a - 2];
		}
	}
	else
	{
		return s[a] % 15746;
	}
	
}
int main()
{

	cin >> N;
	
	cout << CW(N) %15746;
}
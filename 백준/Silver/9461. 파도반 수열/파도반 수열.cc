#include <iostream>
#include <vector>
using namespace std;

vector <long long int> s(101, 0);
unsigned long long int p(long long int t)
{
	if (s[t] == 0)
	{
		if (t < 5)
		{
			s[t - 1] = p(t - 1);
			return s[t - 1];
		}
		else
		{
			s[t - 1] = p(t - 1);
			s[t - 5] = p(t - 5);
			return s[t - 5]+s[t-1];
		}
	}
	else
	{
		return s[t];
	}
}


int main()
{
	s[1] = 1;
	s[2] = 1;
	s[3] = 1;
	s[4] = 2;
	s[5] = 2;
	s[6] = 3;
	s[7] = 4;
	unsigned long long int c, d;
	cin >> d;
	for (int i = 0; i < d; i++)
	{
		cin >> c;
		cout << p(c)<<"\n";

	}

	
}
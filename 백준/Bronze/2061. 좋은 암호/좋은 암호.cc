#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool prime_check(string &s, int a) 
{
	int remain = 0;
	for (int i = 0; i<s.size(); i++)
		remain = (remain * 10 + (s[i])-'0') % a;
	return remain ? true : false;
}
int main()
{
	long long int L, a = 1, sum = 0;

	string K;
	cin >> K >> L;
	vector <int> s1;
	vector <int> s(L+1, 0);
	for (int i = 2; i < L+1; i++)
	{
		
			for (int j = 2; j < L / i + 1; j++)
			{
				s[i * j] = 1;
			}
		
		
	}
	for (int i = 2; i < s.size(); i++)
	{
		if (s[i] == 0)
		{
			s1.push_back(i);
		}
	}


	for (int i = 0; i < s1.size(); i++)
	{
		int g = prime_check(K, s1[i]);
		if (g!=1 && s1[i]!=L)
		{

				


				cout << "BAD ";
				cout << s1[i];
				return 0 ;
		}
	}
	cout << "GOOD";
	
}
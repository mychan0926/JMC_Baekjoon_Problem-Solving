#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <math.h>
using namespace std;

int main()
{
	float W, H, X, Y, P;//너비.높이,모서리x,y,선수 수
	float  b, c, d;
	long long int a = 0;
	string str;
	string str2;
	multiset <long long int> s;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		s.insert(-1*(str[i]-'0'));
	}
	for (multiset<long long int>::iterator i=s.begin(); i !=s.end(); i++)
	{
		cout <<-1*( *i);
	}

}
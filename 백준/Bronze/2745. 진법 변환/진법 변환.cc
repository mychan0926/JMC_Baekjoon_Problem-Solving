#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int n;
	cin >> n;
	long long sum = 0;
		for (int i = 0; i < a.size(); i++)
		{
			char t = a[a.size()-i-1];
			if (t >= '0' && t <= '9')
			{
				sum += (t - '0') * pow(n, i);
			}
			else
			{
				sum += (t - 'A' + 10) * pow(n, i);
			}


		}
		cout << sum;




}
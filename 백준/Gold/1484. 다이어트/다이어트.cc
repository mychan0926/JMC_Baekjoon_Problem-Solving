#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;
vector <ll>  v;
int main()
{
	ll N;
	cin >> N ;
	
	ll first = 1;
	ll end = 1;
	ll vr = 0;
	while (1)
	{
		if ((first-end)*double(first+end)/N == 1)
		{
			cout << first<< "\n";
			vr = 1;
			first++;
		}
		else if ((first - end) * double(first + end) / N > 1)
		{
			end++;
			if (end>first)
			{
				break;
			}
		}
		else if ((first - end) * double(first + end) / N < 1)
		{
			first++;
		}
		if (first > 400000)
		{
			break;
		}
	}
	if(vr==0)
		cout << -1;
}
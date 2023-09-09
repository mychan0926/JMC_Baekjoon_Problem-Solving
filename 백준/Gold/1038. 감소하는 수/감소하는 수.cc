#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <set>

using namespace std;
set <long long> v;
void pushin(int i,int j,long long sum,int big)
{
	if (big < i)
	{
		big = i;
		sum += i * pow(10, j);
		v.insert(sum);
		if (big == 9||j==9)
		{
			
			return;
		}
		else
		{
			for (int k= big+1; k < 10; k++)
			{
				pushin(k,j+1,sum,big);
			}

		}
		



	}
	else 
	{
		return;
	}

	
	
}

int main()
{
	string s;
	int a=0, b, c;
	cin >> a;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		pushin(i, 0,0,-1);
	}

	for (auto k = v.begin(); k != v.end(); k++)
	{
		if (count == a)
		{
			cout << *k;
			exit(0);
		}
		count++;
	}
	cout << -1;

}
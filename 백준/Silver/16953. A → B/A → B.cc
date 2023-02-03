#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
using namespace std;
long long a, b, c, d, n, m=10000000;
void p(long long j, long long count);
int main()
{
	
	cin >> a>> b;
	
	p(a, 0);
	if (m == 10000000)
	{
		cout << -1;
	}
	else
	{
		cout << m+1;

	}
	

}
void p(long long  j,long long count)
{
	
	if (j > b)
	{
		return ;
	}
	else if(j==b)
	{
		if (m > count)
		{
			m=count;
		}
		
	}
	else
	{
		p(j * 2, count+1);
		p(j * 10 + 1, count+1);
	}
}
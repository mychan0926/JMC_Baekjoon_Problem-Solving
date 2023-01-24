#include <iostream>
#include <vector>

using namespace std;
long long int pac(int a)
{
	long long int sum=0;
	for (int i = 1; i < a; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	long long int a, b, c=0, N,M;
	double d;
	cin >> N>>M;
	for (int i = 0; i < 100; i++)
	{
		//a a+1 a+2 a+3
		d = (double)(N - pac(M + i))/(double)(M+i);

		if ((d - (long long int)(d))==0 && d>=0 && 100>=M+i)
		{
			for (int j = 0; j < M + i; j++)
			{
				cout << (long long int)(d) + j<< " ";
			}
			c = 1;
			break;
		}



	}
	if (c != 1)
	{
		cout << "-1";
	}


}
#include <iostream>
#include <string>
#include <map>

using namespace std;

long long int A = 0;
long long int B = 0;
long long int E = 0;
long long int F = 0;
void paczero(long long int N)
{
	long long int C = N;
	long long int D = N;
	while (1)
	{

		if (C / 5 > 0)
		{
			A += C / 5;
			C /= 5;

		}
		else
		{
			break;
		}
	}
	while (1)
	{

		if (D / 2 > 0)
		{
			B += D / 2;
			D /= 2;

		}
		else
		{
			break;
		}
	}

	
}
void paczero2(long long int N)
{
	long long int C = N;
	long long int D = N;
	while (1)
	{

		if (C / 5 > 0)
		{
			E += C / 5;
			C /= 5;

		}
		else
		{
			break;
		}
	}
	while (1)
	{

		if (D / 2 > 0)
		{
			F += D / 2;
			D /= 2;

		}
		else
		{
			break;
		}
	}


}
int main()
{
	long long int N, M, a;
	string c, d;
	cin >> N >> M;
	paczero(N);

	paczero2(N - M);
	paczero2(M);

	if (A - E > B - F)
	{
		cout << B - F;
	}
	else
	{
		cout << A - E;
	}


}
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int N, M, a, A = 0;
	string c, d;
	cin >> N;

		while (1)
		{

			if (N / 5 > 0 )
			{
				A += N / 5;
				N /= 5;
				
			}
			else
			{
				break;
			}
		}

	cout << A;
}
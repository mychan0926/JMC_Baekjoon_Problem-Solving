#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <math.h>
using namespace std;

int main()
{
	int N, M, L = 0;
	int a = 0, b = 0, c = 0, d = 0;
	cin >> a>>N>>M;
	for (int i = 0; i < a; i++)
	{
		cin >> b;

		if (N * N + M * M >= b*b)
		{
			cout << "DA"<<"\n";
		}
		else
		{
			cout << "NE" << "\n";

		}
	}


}
#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
	int a, b, c;
	int N, M, L = 0;
	vector <int> s(10001);
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &M);
		s[M] += 1;
	}
	for (int i = 0; i < 10001; i++)
	{
		if (s[i] != 0)
		{
			for (int j = 0; j < s[i]; j++)
			{
				printf("%d\n", i);
			}

		}

	}




}
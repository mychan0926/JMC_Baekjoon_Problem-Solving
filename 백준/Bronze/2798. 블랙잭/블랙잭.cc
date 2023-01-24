#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M, a;
	int save=0, ab=0;
	vector <int> c(101);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		c[i] = a;
	}
	save = abs(M - (c[0] + c[1] + c[2]));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < N; k++)
			{
				if (i != j && i != k && j != k)
				{
					if (M - (c[i] + c[j] + c[k]) < save && M - (c[i] + c[j] + c[k]) >= 0)
					{
						save = abs(M - (c[i] + c[j] + c[k]));
						ab = c[i] + c[j] + c[k];
					}
				}
			}

		}
		
	}
	cout << ab;
}

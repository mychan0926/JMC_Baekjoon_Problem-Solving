#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, b, c;
	vector <int> s(1000001, 0);
	cin >> a >> b;
	for (int i = 2; i < 1000000; i++)
	{
		if (s[i] == 0)
		{
			for (int j = 2; j < (1000000 / i) + 1; j++)
			{
				s[j * i] = 1;
			}
		}

	}
	for (int i = a; i < b + 1; i++)
	{
		if (s[i] == 0)
		{
			if (i != 1)
			{

			
			cout << i << "\n";

			}
		}
	}
}
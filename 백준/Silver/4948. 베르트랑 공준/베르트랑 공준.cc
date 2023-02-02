#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, b, c;
	int count;
	vector <int> s(1000001, 0);
	
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
	while (1)
	{
		cin >> a;
		if (a == 0)
		{
			break;
		}
		count = 0;
		for (int i = a+1; i < 2*a + 1; i++)
		{
			if (s[i] == 0)
			{
				if (i != 1)
				{
					count++;

					

				}
			}
		}
		cout << count << "\n";
	}
}
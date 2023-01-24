#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int a, b,c,count=0;
	vector <int> s;
	cin >> a >> b;
	for (int i=0;i<a;i++)
	{
		cin >> c;
		s.push_back(c);
	}
	for (int i = 0; i < a; i++)
	{
		while (1)
		{
			if (b - s[a - i - 1] >= 0)
			{
				b -= s[a - i - 1];
				count++;
			}
			else
			{
				break;
			}
		}
		

		
	}
	cout << count;
}
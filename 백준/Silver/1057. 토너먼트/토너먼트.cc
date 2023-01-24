#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	
	int a, b, c, d, count = 1;
	cin >> a;
	vector <int> s(a,0);
	cin >> b >> c;
	s[b-1] = 1;
	s[c-1] = 1;
	d = a;
	while (1)
	{
		vector <int> s1;
		if (d % 2==0)
		{
			for (int i = 0; i < d / 2; i++)
			{
				if (s[i*2]==0 && s[i * 2+1] == 0)
				{
					s1.push_back(0);
				}
				else if(s[i * 2] == 1 && s[i * 2 + 1] == 1)
				{
					cout << count;
					return 0;
				}
				else
				{
					s1.push_back(1);
				}
			}
		}
		else
		{
			int i = 1;
			for (i = 0; i < d / 2; i++)
			{
				if (s[i * 2] == 0 && s[i * 2 + 1] == 0)
				{
					s1.push_back(0);
				}
				else if (s[i * 2] == 1 && s[i * 2 + 1] == 1)
				{
					cout << count;
					return 0;
				}
				else
				{
					s1.push_back(1);
				}
			}

			if (s[i * 2] == 1)
			{
				s1.push_back(1);
			}
			else
			{
				s1.push_back(0);
			}
			
		}
		s = s1;
		d = s.size();
		count++;
	}
}
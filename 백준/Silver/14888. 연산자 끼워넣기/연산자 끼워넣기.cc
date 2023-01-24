#include <iostream>
#include <vector>

using namespace std;
vector <int> cul;
vector <int> c;
vector <int> s;
int big= -1000000001;
int small = 1000000001;
void t(int count);
int main()
{
	int a, b,d, n, m;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		c.push_back(b);
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> b;
		cul.push_back(b);

	}
	s.resize(a-1, 0);

	
	t(0);
	cout << big << "\n" << small;


}


void t(int count)
{

	if (count == s.size())
	{
		int tem = c[0];
		for (int i = 1; i < c.size(); i++)
		{
			if (s[i - 1] == 0)
			{
				tem += c[i];
			}
			if (s[i - 1] == 1)
			{
				tem -= c[i];
			}
			if (s[i - 1] == 2)
			{
				tem *= c[i];
			}
			if (s[i - 1] == 3)
			{
				tem /= c[i];
			}
		}

		if (big < tem)
		{
			big = tem;
		}
		if (small > tem)
		{
			small = tem;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (cul[i] != 0)
			{
				cul[i]--;
				s[count] = i;
				t(count+1);
				cul[i]++;
				s[count] = 0;
			}
		}
	}
}


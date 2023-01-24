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
	multiset <int> s;
	vector <int> s1(8001, 0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int j;
		cin >> j;
		s.insert(j);
	}
	for (multiset<int> ::iterator i = s.begin(); i != s.end(); i++)
	{
		if (b == (N - 1) / 2)
		{
			c = *i;
		}
		a += *i;
		s1[*i + 4000] += 1;
		b++;
		d = *i;
	}
	int save = 0;
	int save2 = 0;
	int checount = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (save < s1[i])
		{
			save = s1[i];
			save2 = i - 4000;
			checount = 0;
		}
		else if (save == s1[i])
		{

			if (checount == 0)
			{
				save2 = i - 4000;
			}
			checount++;
		}
		
	}
	int fd = 0;

	if ((float)a / (float)N<0 && round((float)a / (float)N)==0)
	{
		cout << "0"<< "\n";
	}
	else 
	{
		cout << round((float)a / (float)N)<<"\n";
	}
	cout << c << "\n" << save2 << "\n" << d - *s.begin();




}
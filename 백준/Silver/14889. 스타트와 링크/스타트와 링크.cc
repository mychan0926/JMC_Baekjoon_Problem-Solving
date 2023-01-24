#include <iostream>
#include <vector>

using namespace std;
vector <vector <int> > v;
vector <int> k;
int a;
int bigger=10000;
void re(int count, int choose);
int cal();

void re(int count,int choose)
{
	if (count == a/2)
	{
		int al, be;
		al = cal();
		for (int i = 0; i < a; i++)
		{
			if (k[i] == 1)
			{
				k[i] = 0;
			}
			else
			{
				k[i] = 1;
			}
		}
		be=cal();
		for (int i = 0; i < a; i++)
		{
			if (k[i] == 1)
			{
				k[i] = 0;
			}
			else
			{
				k[i] = 1;
			}
		}
		if (bigger > abs(al - be))
		{
			bigger = abs(al - be);

		}
		return;
	}
	else
	{

		for (int i = choose; i < a; i++)
		{
			if (k[i] != 1)
			{
				k[i] = 1;
				re(count+1,i);
				k[i] = 0;

			}
		}
	}

}

int cal()
{
	int count = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (k[i] == 1 && k[j] == 1 && i != j)
			{
				count += v[i][j];

			}
		}
	}
	return count;
}


int main()
{

	int  b, c, n, m;
	
	cin >> a;
	k.resize(a,0);
	for (int i = 0; i < a; i++)
	{
		vector <int> tmp;
		for (int i = 0; i < a; i++)
		{
			int tm;
			cin >> tm;
			tmp.push_back(tm);
		}
		v.push_back(tmp);
	}
	for (int i = 0; i < a; i++)
	{
		k[i] = 1;
		re(1,i);
		k[i] = 0;
	}
	cout << bigger;
}
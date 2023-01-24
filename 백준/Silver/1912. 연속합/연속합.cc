#include <iostream>
#include <vector>

using namespace std;
int d = -2147483648;


void c(vector <int>& h);

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int a, b, n, m=0;

	vector <int> v;

	cin >> a;
	int allm = 0;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v.push_back(b);
		if (b > 0)
		{
			allm = 1;
		}
	}
	if (allm == 0)
	{
		for (int i = 0; i < a; i++)
		{

			if (d < v[i])
			{
				d = v[i];
			}
		}
		cout << d;
		exit(0);
	}
	int sum = 0;
	int msum = 0;
	vector <int> l;
	vector <int> o;
	for (int i = 0; i < a; i++)
	{
		if (v[i] < 0)
		{
			if (sum != 0){l.push_back(sum); }
			msum += v[i];
			sum = 0;
		}
		else
		{
			if (msum != 0) { l.push_back(msum); }
			sum += v[i];
			msum = 0;
		}
	}
	if (sum != 0) { l.push_back(sum); }
	if (msum != 0) { l.push_back(msum); }


	sum = 0;
	for (int i = 0; i < l.size(); i++)
	{
		if (l[i] < 0)
		{
			if (!(i + 1 >= l.size()))
			{
				if (abs(l[i]) < sum)
				{
					sum = sum + l[i];
					
					
				}
				else
				{
					sum = 0;
				}
			}
			if (d < sum)
			{
				d = sum;
			}
		}
		else
		{
			sum += l[i];
			if (d < sum)
			{
				d = sum;
			}
		}
	}
	if (d < sum)
	{
		d = sum;
	}
	cout << d;

}






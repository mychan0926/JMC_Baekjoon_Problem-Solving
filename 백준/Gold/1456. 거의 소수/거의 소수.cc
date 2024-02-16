#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector <long long> v(10000001, 0);
vector <long long> V;
vector <long long> V1;
int main()
{
	long long a, b;
	cin >> a >> b;
	for (long long i = 2; i < v.size(); i++)
	{
		if (!v[i])
		{
			v[i] = 1;
			V.push_back(i);
		}
		for (long long j = i * 2; j < v.size(); j += i)
		{
			v[j] = 2;
		}

	}
	long long index = 0;
	for (long long i = 0; i < V.size(); i++)
	{
		index = V[i];
		for (long long j = V[i] * V[i]; j <= 100000000000000 && j >= V[i]; j *= V[i])
		{
			if(index!=j/V[i])
			{
				break;
			}

			V1.push_back(j);
			index = j;
		}
		
	}
	long long sum = 0;
	for (long long i = 0; i < V1.size(); i++)
	{
		if (a <= V1[i] && V1[i] <= b)
		{
			sum++;
		}
	}
	cout << sum;
}

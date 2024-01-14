#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
#define f(a) for (long long i=0; i < a; i++)  
using namespace std; 
vector <long long> v;
vector <long long> v1;
int main()
{
	long long a, b,sum=0;
	vector<long long> v;
	cin >> a >>b;
	f(a)
	{
		long long t;
		cin >> t;
		v.push_back(t);
	}

	f(a-1)
	{
		if (v[i + 1] - v[i]-1!=0)
		{
			v1.push_back(v[i + 1] - v[i]-1);
		}
	}
	sort(v1.begin(), v1.end());
	sum = a;
	if (b > v1.size()+1)
	{
		b= v1.size() + 1;
	}
	f(v1.size()+1-b)
	{
		if (i > v1.size()-1)
		{
			break;
		}
		sum += v1[i];
	}
	cout << sum;

}
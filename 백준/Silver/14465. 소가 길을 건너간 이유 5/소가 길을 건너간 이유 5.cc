#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;



int main()
{
	int n, k, b;
	cin >> n >> k >> b;
	vector<int>r(n+1,1);
	vector <int> v;
	for (int i = 0; i < b; i++)
	{
		int t = 0;
		cin >> t;
		r[t] = 0;
	}
	int i = 1;
	int length = 0;
	while (1)
	{
		if (i >= r.size())
		{
			if(length!=0)
			{
				v.push_back(length);
			}
				
			
			break;
		}
		if (r[i] == 1)
		{
			length++;
		}
		else
		{
			v.push_back(length);
			length = 0;
		}
		i++;
	}
	int sum = v[0];
	int count = 1;
	int point1 = 0;
	int point2 = 0;
	int min = 100000;

	if (n == b)
	{
		cout << k;
		exit(0);
	}

	while (1)
	{
		if (v[point2] >= k)
		{
			cout << 0;
			exit(0);
		}
		if (sum+count-1<k)
		{
			
			if (point2 != v.size() - 1)
			{
				point2++;
				count++;
				sum += v[point2];
			}
			else
			{
				break;
			}
			
		}
		else
		{
			if (min > count)
			{
				min = count;
			}
			sum -= v[point1];
			count--;
			point1++;
			if (point1 == v.size() - 1)
			{
				break;
			}
		}
	}
	cout << min-1;


}

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <set>
#include <map>
#include <time.h>
using namespace std;
vector<int> list;
vector<int> index(4000001,0);
int main()
{
	for (long long i = 2; i <= 4000000; i++)
	{
		for (long long j = i; j <= 4000000; j += i)
		{
			if (j != i)
			{
				if (index[j] == 0)
				{
					index[j] = 1;
				}
				
			}
		}
	}
	for (int i = 2; i <= 4000000; i++)
	{
		if (index[i] != 1)
		{
			list.push_back(i);
		}
	}
	int first=0;
	int end=-1;
	int sum = 0;
	int count = 0;
	int a;
	cin >> a;
	while (1)
	{

		if (a > sum)
		{
			
			end += 1;
			if (list.size() == end)
			{
				break;
			}
			sum += list[end];
		}
		else if(a==sum)
		{
			count++;
			end += 1;
			if (list.size() == end)
			{
				break;
			}
			sum += list[end];
		}
		else
		{
			sum -= list[first];
			first += 1;
			if (first > end)
			{
				break;
			}
		}
		
	}
	cout << count;
}


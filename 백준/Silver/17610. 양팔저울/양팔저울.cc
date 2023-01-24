#include <stdio.h>
#include <math.h>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	int sum = 0;
	int num = 0;
	int count = 0;
	int c = 0;
	int all = 0;
	set <int> s;
	int s1[15] = { 0 };
	int s2[15] = { 0 };
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &s1[i]);
		s.insert(s1[i]);
		c += s1[i];
	}
	for (int i = 0; i < pow(3, num); i++)
	{
		s2[0]++;
		all = 0;

		for (int j = 0; j < 13; j++)
		{
			if (s2[j] == 3)
			{
				s2[j + 1]++;
				s2[j] = 0;
			}
			if (s2[j] == 1)
			{
				all += s1[j];
			}
			if (s2[j] == 2)
			{
				all -= s1[j];
			}
		}
		if (all > 0)
		{
			s.insert(all);
		}
		all = 0;



	}
	sum = c - s.size();
	printf("%d", sum);
}
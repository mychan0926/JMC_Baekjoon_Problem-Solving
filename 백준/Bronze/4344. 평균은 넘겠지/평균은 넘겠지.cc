#include <iostream>
#include <vector>
#include <math.h>
#define ll long long
using namespace std;
int main()
{
	int c;

	cin >> c;
	for (int i = 0; i < c; i++)
	{
		vector<int> h;
		int n,s=0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			int t = 0;
			cin >> t;
			s += t;
			h.push_back(t);

		}
		double k = s / double(n);
		int p = 0;
		for (int j = 0; j < n; j++)
		{
			if (h[j] > k)
				p++;

		}
		
		
		printf("%.3lf%\n", (p / double(n)) * 100);
	}

}
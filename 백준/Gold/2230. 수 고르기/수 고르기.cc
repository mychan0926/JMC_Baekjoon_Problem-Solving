#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
vector <ll>  v;
int main()
{
	ll M, N;
	cin >> N >> M;

	for (ll i = 0; i < N; i++)
	{
		ll t;
		cin >> t;
		v.push_back(t);

	}
	sort(v.begin(),v.end());
	ll first = 0;
	ll end = 0;
	ll min = -1;
	while (1)
	{
		if (abs(v[first] - v[end]) >= M)
		{


			if (min > abs(v[first] - v[end]) || min == -1)
			{
				min = v[first] - v[end];
			}
			end++;
			if (first < end)
			{
				break;
			}
		}
		else
		{
			
			first++;
			if (first == v.size())
			{
				break;
			}

		}
	}
	cout << min;
}
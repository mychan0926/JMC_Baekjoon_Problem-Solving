#include <iostream>
#include <vector>
#define ll long long
using namespace std;

vector <ll>  v;
int main()
{
	ll S, N;
	cin >> N >> S;
	for (ll i = 0; i < N; i++)
	{
		ll t;
		cin >> t;
		v.push_back(t);

	}
	ll first = 0;
	ll end = 0;
	ll sum = v[0];
	ll line = 100001;
	ll count = 1;
	while (1)
	{
		
		if (sum >= S)
		{
			if (line > count)
			{
				line = count;
			}
			
			count--;
			sum -= v[end];
			end++;
			if(first<end)
			{
				break;
			}
		}
		else if (sum < S)
		{
			first++;
			count++;
			if (first == v.size())
			{
				break;
			}
			sum += v[first];
		}
		
	}
	if (line == 100001)
	{
		cout << 0;
	}
	else {

		cout << line;
	}

}
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;
ll binary_search(ll t, vector <vector<ll>>& v);

int main() {
	ll N, K,SUM=0;
	priority_queue <pair<ll,ll>> q;
	vector <vector <ll>> weight;
	cin >> N >> K;
	for (ll i = 0; i < N; i++)
	{
		ll M, V;
		cin >> M >> V;
		q.push({V,M});
	}
	vector <ll> t;
	for (ll i = 0; i < K; i++)
	{
		ll C;
		cin >> C;
		t.push_back(C);
	}
	sort(t.begin(),t.end());
	for (ll i = 0; i < K; i++){
		weight.push_back({t[i],0});

	}
	for (ll i = 0; i < N; i++){
		ll V = (q.top()).first;
		ll M = (q.top()).second;
		q.pop();
		ll h = binary_search(M, weight);
		if (h != -1) {
			SUM += V;
		}
			
		

	}
	cout << SUM;
}

ll binary_search(ll t,vector <vector<ll>> &v)
{
	ll begin=0, end=v.size();
	ll mid;
	while (begin<end)
	{
		mid = (begin + end)/2;
		if (v[mid][0]>=t)
		{
			end = mid;
		}
		else
		{
			begin = mid + 1;
		}
	}
	if (begin == v.size())
		return -1;
	if (v[begin][1]==0)
	{
		if (begin != v.size() - 1)
		{
			v[begin][1] = begin + 1;
		}
		else
		{
			v[begin][1] = -1;
		}
		return begin;
	}
	else if (v[begin][1] == -1)

	{
		return -1;
	}
	else
	{
		ll g= v[begin][1];
		while (v[g][1] !=0)
		{
			g = v[g][1];
			if (g == -1)
			{
				return -1;
			}
		}
		
		if (g != v.size() - 1)
		{
			v[g][1] = g + 1;
			v[begin][1] = g + 1;
		}
		else
		{
			v[g][1] = -1;
		}
		return g;
	}
	
	
}
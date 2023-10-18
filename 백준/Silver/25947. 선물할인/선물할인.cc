#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
vector <ll >t;
vector <ll >t2;
vector <ll >t3;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll  a, b, c;
	cin >> a >> b >> c;
	ll count = 0;
	ll sum = 0;
	for (int i = 0; i < a; i++)
	{
		ll t1;
		cin >> t1;
		t.push_back(t1);
	}
	t2.resize(a, 0);
	t3.resize(a, 0);
	sort(t.begin(), t.end());
	for (int i = 0; i < t.size(); i++)
	{
		sum += t[i];
		t2[i] = sum;
		t3[i] = sum / 2;
	}
	ll max = 0;
	ll index = 0;
	for (int i = 0; i < c; i++)
	{
		if (max < i+1 && (t3[i] <= b))
		{
			index = t3[i];
			max = i+1;
		}
	}
	for (int i = 0; i < a-c; i++) 
	{
			if (max < i + c +1&& (t2[i] + t3[i + c] - t3[i] <= b))
			{
				index = t2[i] + t3[i + c] - t3[i];
				max = i + c+1;
			}

	}


	cout << max;
}
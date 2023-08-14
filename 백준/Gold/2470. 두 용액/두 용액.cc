#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;
vector <ll>  v1;
vector <ll>  v2;
bool gt(ll a, ll b)
{
	return a > b;
}
int main()
{
	ll N;
	cin >> N ;
	for (int i = 0; i < N; i++)
	{
		ll t;
		cin >> t;
		if (t < 0)
		{
			v2.push_back(t);
		}
		if (t > 0)
		{
			v1.push_back(t);
		}
	}




	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(),gt);

	ll first = 1;
	ll end = 0;
	ll min = 3000000000;
	ll one = 0;
	ll two = 0;
	ll cou = 0;
	if (v1.size() > 1)
	{
		while (1)
		{

			if (v1[end] + v1[first] < min)
			{
				min = v1[end] + v1[first];
				one = first;
				two = end;
				first++;
				cou = 1;
				if (v1.size() == first)
				{
					break;
				}

			}
			else if (v1[end] + v1[first] >= min)
			{
				end++;
				if (end >= first)
				{
					break;
				}
			}
		}
	}

	first = 1;
	end = 0;
	ll one2 = 0;
	ll two2 = 0;
	if (v2.size() > 1)
	{


		while (1)
		{

			if (v2[end]*-1 + v2[first]*-1 < min)
			{
				min = v2[end]*-1 + v2[first]*-1;
				one2 = first;
				two2 = end;
				cou = 2;
				
				first++;
				if (v2.size() == first)
				{
					break;
				}

			}
			else if (v2[end]*-1 + v2[first]*-1 >= min)
			{
				end++;
				if (end >= first)
				{
					break;
				}
			}
		}
	}
	first = 0;
	end = 0;
	ll one3 = 0;
	ll two3 = 0;
	if ((v2.size() > 0 && v1.size() > 0)&&(v1.size()+v2.size()>1))
	{
		while (1)
		{

			if (v2[end] + v1[first] < 0)
			{
				if (abs(v2[end] + v1[first]) < min)
				{
					min = abs(v2[end] + v1[first]);
					one3 = first;
					two3 = end;
					cou = 3;
				}

				first++;
				if (v1.size() == first)
				{
					break;
				}

			}
			else if (abs(v2[end] + v1[first]) > 0)
			{
				if (abs(v2[end] + v1[first]) < min)
				{
					min = abs(v2[end] + v1[first]);
					one3 = first;
					two3 = end;
					cou = 3;
				}
				end++;
				if (end == v2.size())
				{
					break;
				}
			}
			else
			{
				cout << v2[end] << " " << v1[first];
				exit(0);
			}
		}
	}


	if (cou == 1)
	{
		cout << v1[two] << " " << v1[one];
	}
	else if (cou == 2)
	{
		cout << v2[one2] << " " <<v2[two2];
	}
	else if (cou == 3)
	{
		cout << v2[two3] << " " << v1[one3];
	}

}
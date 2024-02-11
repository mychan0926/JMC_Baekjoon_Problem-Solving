#include <iostream>
#include <vector>
#include <math.h>
#define  ll long long
#define sfor(a) for (long long i = 0; i < a; i++)
#define mod 1000000007
using namespace std;

vector <long long> v;
vector <long long> V;
vector <long long> result;
long long a, b, c;
void insert_segtree(long long s,long long e,long long index,vector <long long>&t, vector <long long>&T)
{
	if (e - s > 0)
	{
		for(long long i=s;i<=e;i++)
		{
			T[index] *= t[i] % 1000000007;
			T[index] %= 1000000007;
		}
		insert_segtree(s, (s + e) / 2, index * 2, t, T);
		
		insert_segtree((s + e) / 2 + 1, e, index * 2 + 1, t, T);

	}
	else if(e-s==0)
	{
		T[index] = t[e] % 1000000007;
	}

	return;
}


long long get_index(long long s,long long e,long long index,long long v1,long long v2,vector<long long>&t)
{
	long long sum = 1;

	if (s >= v1 && e <= v2 && s <= v2 && e >= v1)
	{
		if (t[index] > 0)
		{

			sum *= t[index] % mod;
			sum %= mod;
		}
		else
		{
			sum = 0;
		}
	}
	else if (s > v2 || e < v1)
	{
		return 1;
	}
	else
	{
		sum *= get_index(s,(s+e)/2,index*2,v1,v2,t) % mod * get_index((s + e) / 2+1,e, index * 2+1, v1, v2, t) % mod;
		sum %= mod;
	}

	return sum % mod;;

}
void edit_index(long long s, long long e, long long index, long long v1, long long v2, vector<long long>& t, vector<long long>& T,long long address,long long g, long long g2)
{
	long long tmp;
	if (s >= v1 && e <= v2 && s <= v2 && e >= v1)
	{
		if (index >= t.size())
		{
			return;
		}
		if (s <= address && address <= e)
		{

			if (s == e)
			{
				tmp = g;

			}
			else
			{
				if (address - 1 >= s&& address + 1 <=e)
				{

					tmp = get_index(1,a, 1, s, address - 1, t) % mod * g % mod * get_index(1, a, 1, address + 1,e, t)%mod;
				}
				else if (address - 1 < s && address + 1 <= e)
				{
					tmp = g * get_index(1, a, 1, address + 1, e, t) % mod;
				}
				else if (address - 1 >= s && address + 1 > e)
				{
					tmp = get_index(1, a, 1, s, address - 1, t) * g % mod;
				}
				else if (address - 1 < s && address + 1 > e)
				{
					tmp = g % mod;
				}
			}

			edit_index(s, (s + e) / 2, index * 2, v1, v2, t, T, address, g, g2);
			edit_index((s + e) / 2 + 1, e, index * 2 + 1, v1, v2, t, T, address, g, g2);

			t[index] = tmp % mod;
		}
		

		


	}
	return ;

}


vector <long long> make_segtree(vector <long long> &t)
{
	long long _size = t.size()-1;
	long long max_size = ceil(log2(_size));
	vector <long long> TMP(pow(2,max_size+1), 1);


	insert_segtree(1,_size,1,t,TMP);
	return TMP;
}
int main()
{

	//cin >> a;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sfor (1)
	{
		cin >> a >> b >> c;
		v.clear();
		v.push_back(0);
		for (long long j = 0; j < a; j++)
		{
			long long tmp;
			cin >> tmp;
			v.push_back(tmp);

		}
		V = make_segtree(v);
		sfor(b+c)
		{
			long long ta, tb, tc;
			cin >> ta >> tb >> tc;
			if (ta == 1)
			{
				long long tmp = v[tb];
				if (tc == 0)
				{
					if (v[tb] > 0)
					{
						v[tb] = tc;
						edit_index(1, a, 1, 1, a, V,v, tb, tc, tmp);
						v[tb] *= -1;
					}

				}
				else
				{
					if (v[tb] < 0)
					{
						v[tb] = tc;
						edit_index(1, a, 1, 1, a, V,v, tb, tc , tmp);
					}
					else
					{
						v[tb] = tc;
						edit_index(1, a, 1, 1, a, V,v, tb, tc , tmp);
						
					}
				}

			}
			else if (ta == 2)
			{
				result.push_back(get_index(1, a, 1, tb, tc, V));
			}
		}

		


	}
	sfor(result.size())
	{
		cout << result[i] << "\n";
	}
}

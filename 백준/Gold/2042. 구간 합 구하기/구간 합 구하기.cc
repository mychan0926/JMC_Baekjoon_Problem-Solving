#include <iostream>
#include <vector>
#include <math.h>
#define  ll long long
#define sfor(a) for (long long i = 0; i < a; i++)
using namespace std;

vector <long long> v;
vector <long long> V;
vector <long long> result;
void insert_segtree(long long s,long long e,long long index,vector <long long>&t, vector <long long>&T)
{
	if (e - s > 0)
	{
		for(long long i=s;i<=e;i++)
		{
			T[index] += t[i];
		}
		insert_segtree(s, (s + e) / 2, index * 2, t, T);
		
		insert_segtree((s + e) / 2 + 1, e, index * 2 + 1, t, T);

	}
	else if(e-s==0)
	{
		T[index] = t[e];
	}

	return;
}


long long get_index(long long s,long long e,long long index,long long v1,long long v2,vector<long long>&t)
{
	long long sum = 0;

	if (s >= v1 && e <= v2 && s <= v2 && e >= v1)
	{
		sum += t[index];
	}
	else if (s > v2 || e < v1)
	{
		return 0;
	}
	else
	{
		sum += get_index(s,(s+e)/2,index*2,v1,v2,t)+ get_index((s + e) / 2+1,e, index * 2+1, v1, v2, t);
	}

	return sum;

}
void edit_index(long long s, long long e, long long index, long long v1, long long v2, vector<long long>& t,long long address,long long g)
{

	if (s >= v1 && e <= v2 && s <= v2 && e >= v1)
	{
		if (index > t.size())
		{
			return;
		}
		if (s <= address && address <= e)
		{
			t[index] += g;
			edit_index(s, (s + e) / 2, index * 2, v1, v2, t, address, g);
			edit_index((s + e) / 2 + 1, e, index * 2 + 1, v1, v2, t, address, g);
		}
	}
	return ;

}


vector <long long> make_segtree(vector <long long> &t)
{
	long long _size = t.size()-1;
	long long max_size = ceil(log2(_size));
	vector <long long> TMP(pow(2,max_size+1), 0);


	insert_segtree(1,_size,1,t,TMP);
	return TMP;
}
int main()
{
	long long a, b, c;
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
				edit_index(1, a, 1, 1, a, V,tb,tc-v[tb]);
				v[tb] = tc;
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

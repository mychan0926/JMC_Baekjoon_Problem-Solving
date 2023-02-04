#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	long long a , b,c,d,n,m,near=1000000001, reinf,m1,m2,m3;
	cin >> a;
	vector <long long> v;
	for (long long i = 0; i < a; i++)
	{
		long long tem;
		cin >> tem;
		v.push_back(tem);

	}
	sort(v.begin(), v.end());
	long long re = 0; //전부 음수 0, 벨런스 1, 전부 양수 2
	long long inf = 0;
	vector <int> temp;
	if (v[0] >= 0)
	{
		re = 2;
		for (int i = 0; i < 3; i++)
		{
			temp.push_back(v[i]);
		}
		sort(temp.begin(), temp.end());
		for (int i = 0; i < 3; i++)
		{
			cout<<temp[i];
			cout << " ";
		}
		return 0;
	}
	else if (v[v.size()-1] < 0)
	{
		re = 0;
		for (int i = 0; i < 3; i++)
		{
			temp.push_back(v[v.size()-1-i]);
		}
		sort(temp.begin(), temp.end());
		for (int i = 0; i < 3; i++)
		{
			cout << temp[i];
			cout << " ";
		}
		return 0;
	}
	else
	{

		long long t= 0;

		
		for (long long i=0;i<v.size();i++)
		{
			long long start = 0;
			long long end = v.size() - 1;
			while (1)
			{
				if (near > std::abs(v[start] + v[end] + v[i])&& v[start]!= v[end]&& v[end]!=v[i] && v[i] != v[start])
				{
					near = std::abs(v[start] + v[end] + v[i]);
					m1 = v[start];
					m2 = v[end];
					m3 = v[i];
				}
				else
				{

					if (v[start] + v[end] + v[i] < 0)
					{
						if (start != v.size() - 1 && start + 1 != end)
						{
							start++;
							
						}
						else
						{
							break;
						}
					}
					else
					{
						if (end !=0 && end-1 != start)
						{
							end--;
						}
						else
						{
							break;
						}
					}
				}
					
			}
		}

	}
	vector <long long> st = { m1,m2,m3 };
	sort(st.begin(),st.end());
	cout << st[0]<<" " << st[1] <<" "<< st[2];

}

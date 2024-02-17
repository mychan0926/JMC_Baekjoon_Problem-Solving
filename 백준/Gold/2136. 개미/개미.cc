#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <deque>
#define ll long long
using namespace std;
vector <pair<int, int>> m;
vector <pair<int, int>> q;
vector<int>result;
deque <int> index;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long t;
	for (int i = 0; i < 1; i++)
	{
		m.clear();
		index.clear();
		long long n, l, k;
		cin >> n >> l;
		k = n;

		for (int j = 0; j < n; j++)
		{
			long long a, p;
			cin >> p;
			a = j + 1;
			if (p < 0)
			{
				a *= -1;
				p *= -1;
			}
			if (a < 0)
			{
				m.push_back({ p,a });
				q.push_back({ abs(p),a*-1 });
			}
			else
			{

				m.push_back({ l - p,a });
				q.push_back({ abs(p),a });
			}
		}

		sort(m.begin(), m.end());
		sort(q.begin(), q.end());

		for (int j = 0; j < q.size(); j++)
		{
			index.push_back(q[j].second);
		}
		long long h = 0;
		for (int j = 0; j < k - 1; j++)
		{
			if (j == k - 2)
			{

				if (m[j].first == m[j + 1].first)
				{
					result.push_back(max(index.front(), index.back()));
					h = 1;
				}
				else
				{
					if (m[j].second < 0)
					{
						index.pop_front();
					}
					else
					{
						index.pop_back();
					}
				}
			}
			else
			{
				if (m[j].second < 0)
				{
					index.pop_front();
				}
				else
				{
					index.pop_back();
				}
			}

		}
		if (h == 0)
		{
			if (k < n)
			{
				if (m[k - 1].first == m[k].first)
				{

					result.push_back(min(index.front(), index.back()));
				}
				else
				{

					if (m[k - 1].second < 0)
					{
						result.push_back(index.front());
					}
					else
					{
						result.push_back(index.back());
					}
				}
			}
			else
			{
				if (m[k - 1].second < 0)
				{
					result.push_back(index.front());
				}
				else
				{
					result.push_back(index.back());
				}
			}
		}
		cout << result[0] << " " << m[k-1].first;

	}




}

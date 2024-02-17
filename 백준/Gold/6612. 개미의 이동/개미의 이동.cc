#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <deque>
#define ll long long
using namespace std;
vector <pair<long long, pair<long long, long long>>> m;
vector <pair<long long, pair<long long, long long>>> q;
vector<long long>result;
deque <long long> index;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long t;
	while (1) {
		m.clear();
		index.clear();
		q.clear();
		long long n, l, k;
		cin >> l >> n;
		if (cin.eof()) break;
		k = n;

		for (int j = 0; j < n; j++)
		{
			long long a, p;
			char hg;
			cin >> p>>hg;
			a = p;
			if (hg == 'L')
			{
				p*=-1;
			}
			if (p < 0)
			{
				a *= -1;
				p *= -1;
			}
			if (a < 0)
			{
				m.push_back({ p,{a ,hg} });
				q.push_back({ abs(p),{a*-1,hg }});
			}
			else if (a > 0)
			{

				m.push_back({ l - p,{a ,hg} });
				q.push_back({ abs(p),{a ,hg} });
			}
			else
			{
				if (hg == 'L')
				{
					m.push_back({ p,{a ,hg} });
					q.push_back({ abs(p),{a * -1,hg } });
				}
				else
				{

					m.push_back({ l - p,{a ,hg} });
					q.push_back({ abs(p),{a ,hg} });
				}
			}
		}

		sort(m.begin(), m.end());
		sort(q.begin(), q.end());

		for (int j = 0; j < q.size(); j++)
		{
			index.push_back(q[j].second.first);
		}
		long long h = 0;
		for (int j = 0; j < k - 1; j++)
		{
			if (j == k - 2)
			{

				if (m[j].first == m[j + 1].first)
				{
					cout << "The last ant will fall down in " << m[k - 1].first << " seconds - ";
					cout << "started at " << min(index.front(), index.back()) << " and " << max(index.front(), index.back()) << ".\n";
					result.push_back(max(index.front(), index.back()));
					h = 1;
				}
				else
				{
					if (m[j].second.first < 0)
					{
						index.pop_front();
					}
					else if (m[j].second.first > 0)
					{
						index.pop_back();
					}
					else
					{
						if (m[j].second.second == 'L')
						{
							index.pop_front();
						}
						else
						{
							index.pop_back();
						}
					}
				}
			}
			else
			{
				if (m[j].second.first < 0)
				{
					index.pop_front();
				}
				else if (m[j].second.first > 0)
				{
					index.pop_back();
				}
				else
				{
					if (m[j].second.second == 'L')
					{
						index.pop_front();
					}
					else
					{
						index.pop_back();
					}
				}
			}

		}
		if (h == 0)
		{
			if (k < n)
			{
				if (m[k - 1].first == m[k].first)
				{
					cout << "The last ant will fall down in " << m[k - 1].first << " seconds - ";
					cout << "started at " << min(index.front(), index.back()) << " and " << max(index.front(), index.back()) << ".\n";
					result.push_back(min(index.front(), index.back()));
				}
				else
				{

					if (m[k - 1].second.first < 0)
					{
						cout << "The last ant will fall down in " << m[k - 1].first << " seconds - started at " << index.front() << ".\n";
						result.push_back(index.front());
					}
					else if (m[k - 1].second.first > 0)
					{
						cout << "The last ant will fall down in " << m[k - 1].first << " seconds - started at " << index.back() << ".\n";
						result.push_back(index.back());
					}
					else
					{
						if (m[k - 1].second.second == 'L')
						{
							cout << "The last ant will fall down in " << m[k - 1].first << " seconds - started at " << index.front() << ".\n";
							result.push_back(index.front());
						}
						else
						{
							cout << "The last ant will fall down in " << m[k - 1].first << " seconds - started at " << index.back() << ".\n";
							result.push_back(index.back());
						}
					}
				}
			}
			else
			{
				if (m[k - 1].second.first < 0)
				{
					cout << "The last ant will fall down in " << m[k - 1].first << " seconds - started at " << index.front() << ".\n";
					result.push_back(index.front());
				}
				else if (m[k - 1].second.first > 0)
				{
					cout << "The last ant will fall down in " << m[k - 1].first << " seconds - started at " << index.back() << ".\n";
					result.push_back(index.back());
				}
				else
				{
					if (m[k - 1].second.second == 'L')
					{
						cout << "The last ant will fall down in " << m[k - 1].first << " seconds - started at " << index.front() << ".\n";
						result.push_back(index.front());
					}
					else
					{
						cout << "The last ant will fall down in " << m[k - 1].first << " seconds - started at " << index.back() << ".\n";
						result.push_back(index.back());
					}
				}
			}
		}

	}




}

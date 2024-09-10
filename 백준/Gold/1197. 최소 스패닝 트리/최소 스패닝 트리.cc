#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
vector <long long> v;
vector <vector <long long>> s;
long long counting = 0;
long long t(long long a, long long b)
{
	int t1 = a;
	int t2 = b;
	while (1) {
		if (t1 == v[t1]) {
			v[a] = t1;
			break;
		}
		else {
			t1 = v[t1];
		}
	}
	while (1) {
		if (t2 == v[t2]) {
			v[b] = t1;
			break;
		}
		else {
			t2 = v[t2];
		}
	}
	if (t2 == t1)
	{
		return 1;
	}
	else
	{
		v[t2] = t1;
		return 0;
	}


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long N, M;
	cin >> N >> M;
	v.resize(N, 0);
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = i;
	}
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		s.push_back({ c,a - 1,b - 1 });
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < M; i++)
	{
		if (t(s[i][1], s[i][2]) == 0)
		{
			counting += s[i][0];
		}
	}
	cout << counting;


}
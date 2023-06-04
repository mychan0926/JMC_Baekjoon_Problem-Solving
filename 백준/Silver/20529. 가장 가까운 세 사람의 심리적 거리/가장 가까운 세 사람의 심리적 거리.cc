#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <string>

using namespace std;

map < pair<string, pair<string, string>>, int > m;

int stb(string &a,string &b, string& c)
{
	if (a == b & b == c)
	{
		return 0;
	}
	vector <string> s;
	s.push_back(a);
	s.push_back(b);
	s.push_back(c);
	int h[4] = { 0,1,2,0 };
	int sum = 0;

	if (m[{a, { b,c }}] != 0)
	{
		return m[{a, { b,c }}];
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			int count = 0;
			for (int j = 0; j < 4; j++)
			{
				if (s[h[i]][j] != s[h[i + 1]][j])
				{
					count++;
				}
			}

			sum += count;
		}
		m[{a, { b,c }}] = sum;
		return sum;
	}


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T, N;
	
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int min = 1000;
		cin >> N;
		vector <string> s;
		for (int j = 0; j < N; j++)
		{
			string t;
			cin >> t;
			s.push_back(t);
		}

		for (int j = 0; j < N-2; j++)
		{
			for (int k = j+1; k < N-1; k++)
			{
				for (int l = k+1; l < N; l++)
				{
					if ((j != k) && (k != l) && (l != j))
					{
						int cal = stb(s[j], s[k], s[l]);
						
						if (cal < min)
						{
							min = cal;
						}
						if (min == 0)
						{
							break;
						}
					}
					if (min == 0)
					{
						break;
					}
				}
				if (min == 0)
				{
					break;
				}
			}
			if (min == 0)
			{
				break;
			}
		}
		cout << min<<"\n";
	}
	

}
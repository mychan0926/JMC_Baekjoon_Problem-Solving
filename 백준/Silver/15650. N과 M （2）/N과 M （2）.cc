#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int M, N;
vector <string> check;
string s = "000000000";
string t = "000000000";
int c = 0;
void prf(int n, string &s)
{


		if (s[n] == '0')
		{
			c++;
			s[n] = '1';

		}
		else
		{
			return;
		}
		if (c == M)
		{
			if (find(check.begin(), check.end(), s) == check.end())
			{
				check.push_back(s);
				for (int i = 0; i < s.size(); i++)
				{
					if (s[i] == '1')
					{
						cout << i << ' ';
					}

				}
				cout << "\n"; 
				c--;
				s[n] = '0';
				return;
			}
			else
			{
				s[n] = '0';
				c--;
				return;
			}
		}
		else
		{
			for (int i = 1; i <= N; i++)
			{

				prf(i, s);
				
			}
			s[n] = '0';
			c--;
			return;
		}


}

int main()
{


	
	cin >> N;
	cin >> M;
	for (int i = 1; i <= N; i++)
	{
		s = "000000000";
		c = 0;
		prf(i,s);
	}

}
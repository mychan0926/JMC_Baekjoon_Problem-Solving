#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <stack>
#include <math.h>
using namespace std;

void DP(string txt, int i, deque <string>&d);
int main()
{
	int b, c, n, m;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string s;
		string tem;
		int rotated = 0;
		deque <string> D;
		cin >> tem;
		int dep;
		cin >> dep;
		cin >> s;
		DP(s,dep,D);
		int error=0;
		for (int j = 0; j < tem.size(); j++)
		{

			if (rotated == 0)
			{
				if (tem[j] == 'R')
				{
					rotated = 1;

				}
				else if (tem[j] == 'D')
				{
					if (D.size() == 0)
					{
						error = 1;
					}
					else
					{
						D.pop_front();
					}
					
				}
			}
			else
			{
				if (tem[j] == 'R')
				{
					rotated = 0;

				}
				else if (tem[j] == 'D')
				{
					if (D.size() == 0)
					{
						error = 1;
					}
					else
					{
						D.pop_back();
					}
					
				}
			}
		}

		if (error == 0)
		{
			int k = 0;
			int sized = D.size();
			cout << '[';
			if (rotated == 0)
			{
				for (auto a = D.begin(); a != D.end(); a++)
				{
					k++;
					cout << *a;
					if (k != sized)
					{
						cout << ',';
					}
				}
			}
			else
			{
				stack <string> q;
				for (auto a = D.begin(); a != D.end(); a++)
				{
					q.push(*a);
				}
				while (q.size() != 0)
				{
					cout << q.top();
					q.pop();
					if (q.size() != 0)
					{
						cout << ',';

					}
					else
					{
						break;
					}
				}
			}
			cout << "]\n";
		}
		else
		{
			cout << "error\n";
		}
		

	}
	

}

void DP(string txt,int i,deque <string>&d)
{
	string all;
	int count = 0;
	for (int j = 1; j < txt.size()-1; j++)
	{
		if (txt[j]==',')
		{
			count = 0;
			d.push_back(all);
			all = "";
		}
		else if(txt[j]>='0'&&'9'>=txt[j])
		{
			all.push_back(txt[j]);
		}
	}
	if (all.size()!=0)
	{
		d.push_back(all);
	}
	return;


}


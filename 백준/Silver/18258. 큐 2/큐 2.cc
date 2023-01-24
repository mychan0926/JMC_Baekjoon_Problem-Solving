#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int a, b, c = 0;
	int push=0, pop=0;
	a = -1;
	vector <int> s;
	int tem = 0;
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> b;

	for (int i = 0; i < b; i++)
	{
		string h;
		cin >> h;
		if (h == "push")
		{
			cin >> c;
			s.push_back(c);
			if (a == -1)
			{
				a = 0;
			}
			push++;

		}
		else if (h == "pop")
		{
			if (a == -1)
			{
				cout << -1 << "\n";
			}
			else if (s.size() != a)
			{
				cout << s[a] << "\n";
				a++;
				pop++;
			}
			else
			{
				cout << -1 << "\n";
			}
			

		}
		else if (h == "size")
		{
			cout << s.size() - a<<"\n";
		}
		else if (h == "empty")
		{
			if (push==pop)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (h == "front")
		{
			if (push!=pop)
			{
				cout << s[a] << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}

		}
		else if (h == "back")
		{
			if (push != pop)
			{
				cout << s[s.size() - 1] << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}
		}

	}
}
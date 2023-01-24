#include <algorithm>
#include <queue>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	queue <int> a;
	string answer;
	int b;

	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> answer;
		if (answer == "push")
		{
			int c;
			cin >> c;
			a.push(c);
		}
		else if (answer == "pop")
		{
			if (!a.empty())
			{
				cout << a.front() << "\n";
				a.pop();
			}
			else
			{
				cout << "-1" << "\n";
			}
			
		}
		else if (answer == "size")
		{
			cout << a.size() << "\n";

		}
		else if (answer == "empty")
		{
			cout << a.empty() << "\n";
		}
		else if (answer == "front")
		{
			if (!a.empty())
			{
				cout << a.front() << "\n";
			}
			else
			{
				cout << "-1" << "\n";
			}
			
		}
		else if (answer == "back")
		{
			if (!a.empty())
			{
				cout << a.back() << "\n";
			}
			else
			{
				cout << "-1" << "\n";
			}
			
		}
	}
}
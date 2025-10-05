#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	
	string a;
	cin >> a;

	int sum = 0;
	for (int i = 1; i < stoi(a)+1; i++)
	{
		for (int j = 0; j < (to_string(i)).size(); j++)
		{
			if ((to_string(i)[j]-'0')%3 ==0&& to_string(i)[j] - '0'!=0)
			{
				sum++;
			}
		}
	}
	cout << sum;
}
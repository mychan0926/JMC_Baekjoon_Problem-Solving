#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int BS(vector <int> &s, int target, int low, int high) {
	if (low > high)
	{
		printf("0\n");
		return 0;
	}
		

	int mid = (low + high) / 2;
	if (s[mid] == target)
	{
		printf("1\n");
		return 0;
	}
		
	else if (s[mid] > target)
	{
		BS(s, target, low, mid - 1);
		return 0;
	}
	else
	{
		BS(s, target, mid + 1, high);
		return 0;
	}
		
}
/*if ((int)((first + end) / 2) == first)
{
	cout << "0\n";
	return;
}*/

int main()
{
	int a, b,c,count=0;
	vector <int> s;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		s.push_back(b);
	}
	cin >> a;
	sort(s.begin(), s.end());
	for (int i = 0; i < a; i++)
	{
		scanf("%d",&b);
		BS(s,b,0, s.size()-1);

	}
}
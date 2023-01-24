#include <iostream>
#include <vector>
using namespace std;
int g = 0;
int N;
vector <pair<int, int>>s;
void max(int day, int sum)
{

	if (day > N)
	{
		return;
	}
	else if (day == N)
	{
		if (g < sum) g = sum;
	}
	for (int i = day + 1; i < N+1; i++)
	{
			max(s[i].first+i-1, sum+ s[i].second);
			max( i, sum);
		
	}
}


int main()
{
	int  P, T;
	cin >> N;
	s.push_back({ 0,0 });
	for (int i = 0; i < N; i++)
	{
		cin >> T >> P;
		s.push_back({ T,P });
	}
	max(0, 0);
	cout << g;
}
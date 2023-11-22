#include <iostream>
#include <vector>


using namespace std;
vector <int> v;
vector <long long> dp;
long long index(int i)
{
	if (i >= 0)
	{
		return dp[i];
	}
	else
	{
		return 0;
	}
}

int main()
{
	int N, M;

	cin >> N >> M;
	dp.resize(M+1,0);
	for (int i = 0; i < N; i++)
	{
		int t; 
		cin >> t;
		v.push_back(t);
		
	}
	for (int i = 0; i < N; i++)
	{

		dp[0] = 1;

	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			dp[j] +=index(j-v[i]);
		}
	}
	cout << dp[M];

}

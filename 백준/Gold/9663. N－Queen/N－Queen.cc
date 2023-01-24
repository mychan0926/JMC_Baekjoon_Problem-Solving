#include <iostream>
#include <set>
#include <vector>

using namespace std;
vector <vector <int>> chess;
vector <int> D1(15,0);
vector <int> DRUP(27,0);
vector <int> DLUP(27,0);
int N;
int cnt = 0;

void queen(int t)
{
	if (t == N)
	{
		cnt++;
		return;
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			if (D1[i] == 0 && DRUP[i + t] == 0 && DLUP[i - t + N - 1] ==0)
			{
				D1[i] += 1;
				DRUP[i+t] += 1;
				DLUP[i - t + N - 1] += 1;
				queen(t + 1);
				D1[i] -= 1;
				DRUP[i + t] -= 1;
				DLUP[i - t + N - 1] -= 1;


			}
		}
	}
	return;
}
int main()
{
	int M;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		vector <int> tem(N, 0);
		chess.push_back(tem);
	}
	queen(0);
	cout << cnt;
}
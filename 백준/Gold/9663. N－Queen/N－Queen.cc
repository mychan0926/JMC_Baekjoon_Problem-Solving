#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> width;
vector <int> left_rising_diagonal;
vector <int> right_rising_diagonal;
int N;
int cnt = 0;

void queen(int count)
{
	if (count == N)
	{
		cnt++;
		return;
	}
	else
	{
		for (int i=0;i<N;i++)
		{
			if (width[i] == 0 && right_rising_diagonal[count+i]==0&& left_rising_diagonal[count-i+N] == 0)
			{
				width[i] = 1;
				right_rising_diagonal[count + i] = 1;
				left_rising_diagonal[count - i + N] = 1;
				queen(count + 1);
				width[i] = 0;
				right_rising_diagonal[count + i] = 0;
				left_rising_diagonal[count - i + N] = 0;
			}
		}


	}
}

int main()
{
	cin >> N;
	width.resize(N,0);
	left_rising_diagonal.resize(N+N, 0);
	right_rising_diagonal.resize(N+N, 0);
	queen(0);
	cout << cnt;
}


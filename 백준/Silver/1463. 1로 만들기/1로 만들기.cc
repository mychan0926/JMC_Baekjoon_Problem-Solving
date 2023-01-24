#include <iostream>
#include <vector>
using namespace std;
int g = 1000000;
vector <int> s(1000001);

int t(int N)
{
	int case1, case2, case3;
	case1 = s[N - 1]+1;
	if (N % 2 == 0) 
	{
			case2 = s[N / 2] + 1;
	}
	
	else case2 = 100000;
	if (N % 3 == 0)
	{
		case3 = s[N / 3] + 1;
	}
	else case3 = 100000;

	if (case1 <= case2 && case1 <= case3)
	{
		return case1;
	}
	else if (case2 <= case3 && case2 <= case1)
	{
		return case2;
	}
	else
	{
		return case3;
	}
	
}

int main()
{
	int N, count = 0;
	cin >> N;

	s[1] = 0;
	s[2] = 1;
	s[3] = 2;
	s[4] = 2;
	for (int i = 2; i <= N; i++)
	{
		s[i]=t(i);
	}
	
	cout << s[N];
}

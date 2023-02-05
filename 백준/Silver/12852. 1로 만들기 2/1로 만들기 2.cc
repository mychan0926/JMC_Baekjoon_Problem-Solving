#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
int bigger = 1000000;
map <int, pair<int, queue<int>>> v;
queue <int> s1;
void dp(int a, int count, queue <int> s);
int main()
{
	int a, b, c, d;
	cin >> a;
	dp(a,0,s1);
	cout << bigger<<"\n";
	for (int i = 0; i < bigger; i++)
	{
		cout << s1.front()<<" ";
		s1.pop();
	}
	cout << 1;

}

void dp(int a,int count,queue <int> s)
{
	if (bigger < count)
	{
		return;
	}
	if (v[a].first !=0)
	{
		if (count < v[a].first)
		{
			v[a] = { count,s };
		}
		else
		{
			return;
		}
	}
	if (a == 1)
	{
		if (bigger > count)
		{
			bigger = count;
			s1 = s;
		}

		return;
	}
	else if (a > 1)
	{
		s.push(a);
		v[a] = { count,s };
		if (a % 3 == 0)
		{
			dp(a / 3, count + 1, s);
		}
		if (a % 2 == 0)
		{
			dp(a / 2, count + 1, s);
		}
		
		dp(a - 1, count + 1, s);
		
		return;
	}
	else
	{
		return;
	}
}
#include <iostream>
#include <vector>
#include <set>
#include <math.h>
using namespace std;


set <int> mins;
set <int> maxs;

vector <int> s_min;
vector <int> s_max;
vector <int> index;

int power;
void min(int start, int end, int lims, int lime, int node)
{
	if (lime<start || lims>end||start>end)
	{
		return;
	}
	if (lims <= start && lime >= end)
	{
		mins.insert(s_min[node]);
		return;
	}
	else
	{
		int mid = (start + end) / 2;


		min(start, mid, lims, lime, 2 * node);
		min(mid+1, end, lims, lime, 2 * node + 1);
		return;
	}


}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int a, b, c, n, m, size, floor, floor_first_array;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> n;
		index.push_back(n);
	}
	size = index.size();
	floor = 1;
	
	while ((pow(2, floor - 1) < size))
	{
		floor++;
	}
	power = pow(2, floor - 1);
	floor_first_array = power;
	s_min.resize(pow(2, floor), 1000000000);
	for (int i = 0; i < size; i++)
	{
		s_min[i + floor_first_array] = index[i];
	}
	for (int i = (power-1+a)%2? (power - 2 + a): (power - 1 + a); i > 1; i--)
	{
		if (s_min[i] > s_min[i + 1])
		{
			s_min[i / 2] = s_min[i + 1];
		}
		else
		{
			s_min[i / 2] = s_min[i];
		}
	}
	for (int i = 0; i < b; i++)
	{
		int g, h;
		cin >> g >> h;
		mins.clear();
		min(0, power-1, g - 1, h-1, 1);
		cout << *(mins.begin()) << "\n";
	}


		
}
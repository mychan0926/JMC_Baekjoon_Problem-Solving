#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>


using namespace std;
vector <int> v;
vector <int> num_list(14,0);
int counting = 0;
vector <pair<int, int>> check_matrix_num = { {-1,-1},
	{ 4,0 }, { 4,1 }, { 4,2 }, { 4,3 } ,
	{ 5,0 }, { 5,1 }, { 5,2 }, { 5,3 } ,
	{ 6,0 }, { 6,1 }, { 6,2 },
	{ 7,0 }, { 7,1 } };
vector <int> c = {4,4,3,2,4,4,3,2};
bool cal(pair<int, int> a, int b)
{
	v[a.first] -= b;
	v[a.second] -= b;
	if (b < 0)
	{
		c[a.first]++;
		c[a.second]++;
	}
	else
	{
		c[a.first]--;
		c[a.second]--;
	}
	if (c[a.first] == 0&& v[a.first] != 0)
	{
		return 1;
	}
	if (c[a.second] == 0 && v[a.second] != 0)
	{
		return 1;
	}

	return ((v[a.first] < 0 || v[a.second] < 0));
}
void back_tracking(int a,int b) //a의 공간에 b를 넣기
{
	if (a > 12)
	{
		counting++;
		return;
	}
	else
	{
		for (int i = 1; i < 14; i++)
		{
			if (num_list[i] == 0)
			{
				num_list[i] = 1;
				if (cal(check_matrix_num[a + 1], i))
				{
					cal(check_matrix_num[a + 1], -i);
					num_list[i] = 0;
					continue;
				}
				back_tracking(a+1, i);
				cal(check_matrix_num[a+1], -i);
				num_list[i] = 0;
			}
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);



	int t;
	for (int i = 0; i < 8; i++)
	{
		cin >> t;
		v.push_back(t);
	}

	for (int i = 1; i < 14; i++)
	{
		num_list[i]= 1;
		if (cal(check_matrix_num[1], i))
		{
			cal(check_matrix_num[1], -i);
			num_list[i] = 0;
			continue;
		}
		back_tracking(1,i);
		cal(check_matrix_num[1], -i);
		num_list[i] = 0;
	}
	cout << counting;
}


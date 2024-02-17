#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <math.h>
#define ll long long
using namespace std;
vector<vector<vector<int >>> v;
vector < vector<int >>player;
int a, b, c, d, e, f;
int sum = -1;
void df(int count, int score, int dark, int white)
{
	if (dark > 15 || white > 15)
	{
		return;
	}
	if (count == c - 1)
	{
		if (dark == 15 && white == 15)
		{
			if (score > sum)
			{
				sum = score;
			}
			return;
		}
		return;
	}
	if (dark == 15 && white == 15)
	{
		if (score > sum)
		{
			sum = score;
		}
		return;
	}

	else
	{
		if (score > v[count][dark][white])
		{

			v[count][dark][white] = score;
			df(count + 1, score, dark, white);
			df(count + 1, score + player[count + 1][0], dark, white + 1);
			df(count + 1, score + player[count + 1][1], dark + 1, white);

		}
		else
		{
			return;
		}




	}

}

int main()
{

	while (1)
	{
		cin >> a >> b;
		if (cin.eof()) break; // cin.eof() returns true if eof
		player.push_back({ a,b });
		c++;
	}
	v.resize(c + 1, vector<vector<int>>(16, vector<int>(16, -1)));
	df(0, 0, 0, 0);

	df(0, player[0][0], 0, 1);

	df(0, player[0][1], 1, 0);


	cout << sum;
}
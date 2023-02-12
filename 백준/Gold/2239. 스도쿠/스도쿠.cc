#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
vector <vector <int>> s(9, vector <int>(9));
vector <pair<int, int>> zero;
vector <pair<pair<int, int>, vector<int>>> zero2;
vector <vector <int>> xcheck(9);
vector <vector <int>> ycheck(9);
vector <vector <int>> boxcheck(9);
vector <int> number;
void process(int count);
int main()
{

	for (int i = 0; i < 9; i++)
	{
		string t;
		cin >> t;
		for (int j = 0; j < 9; j++)
		{
			s[i][j] = t[j]-'0';

		}
	}
	// 가로: 뒤, 세로: 앞
	for (int i = 0; i < 9; i++)
	{
		vector <int> t(9, 0);

		for (int j = 0; j < 9; j++)
		{
			if (s[i][j] != 0)
			{
				t[j] = 1;
			}

		}

		for (int j = 0; j < 9; j++)
		{

			if (t[j] == 0)
			{
				zero.push_back({ i,j });

			}
		}


	}

	for (int i = 0; i < 9; i++)
	{
		vector <int> t(9, 1);
		for (int j = 0; j < 9; j++)
		{
			if (s[i][j] != 0)
			{
				t[s[i][j] - 1] = 0;
			}
		}

		xcheck[i] = t; //가로
	}
	for (int i = 0; i < 9; i++)
	{
		vector <int> t(9, 1);
		for (int j = 0; j < 9; j++)
		{
			if (s[j][i] != 0)
			{
				t[s[j][i] - 1] = 0;
			}
		}

		ycheck[i] = t; //세로
	}
	for (int i = 0; i < 9; i++)
	{
		vector <int> t(9, 1);
		for (int j = 0; j < 9; j++)
		{
			if (s[j / 3 + (i / 3) * 3][j % 3 + (i % 3) * 3] != 0)
			{
				t[s[j / 3 + (i / 3) * 3][j % 3 + (i % 3) * 3] - 1] = 0;
			}
		}

		boxcheck[i] = t; //세로
	}
	for (int i = 0; i < zero.size(); i++)
	{
		int y = zero[i].first;
		int x = zero[i].second;
		vector <int> c(9, 1);
		vector <int> tm;
		for (int j = 0; j < xcheck[y].size(); j++)
		{
			if (xcheck[y][j] == 0)
			{
				c[j] = 0;
			}
		}
		for (int j = 0; j < ycheck[x].size(); j++)
		{
			if (ycheck[x][j] == 0)
			{
				c[j] = 0;
			}
		}
		for (int j = 0; j < boxcheck[(y / 3) * 3 + x / 3].size(); j++)
		{
			if (boxcheck[(y / 3) * 3 + x / 3][j] == 0)
			{
				c[j] = 0;
			}
		}

		for (int j = 0; j < 9; j++)
		{
			if (c[j] == 1)
			{
				tm.push_back(j + 1);
			}
		}



		zero2.push_back(make_pair(zero[i], tm));
		number.push_back(tm.size());
	}


	process(0);




}

void process(int count)
{
	if (count == zero.size())
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{

				cout << s[i][j];

			}
			cout << "\n";
		}
		exit(0);
	}
	else
	{
		int sum = 0;


		for (int j = 0; j < zero2[count].second.size(); j++)
		{
			int tem = zero2[count].second[j];
			if (tem == -1)
			{
				sum++;
				continue;
			}

			int y = zero2[count].first.first;
			int x = zero2[count].first.second;
			vector <pair<int, int>> xc;
			vector <pair<int, int>> yc;
			vector <pair<int, int>> bc;

			s[y][x] = tem;
			zero2[count].second[j] = -1;
			number[count]--;



			for (int k = count; k < zero2.size(); k++)
			{
				int temx = zero2[k].first.second;
				int temy = zero2[k].first.first;
				int temb = (temy / 3) * 3 + temx / 3;
				int sized = zero2[k].second.size();


				if (temy == y)
				{
					for (int l = 0; l < sized; l++)
					{
						if (zero2[k].second[l] == tem)
						{
							zero2[k].second[l] = -1;
							number[k]--;
							yc.push_back({ k,l });
						}
					}

				}
				if (temx == x)
				{
					for (int l = 0; l < sized; l++)
					{
						if (zero2[k].second[l] == tem)
						{
							zero2[k].second[l] = -1;
							number[k]--;
							xc.push_back({ k,l });
						}
					}

				}
				if (temb == (y / 3) * 3 + x / 3)
				{
					for (int l = 0; l < sized; l++)
					{
						if (zero2[k].second[l] == tem)
						{
							number[k]--;
							zero2[k].second[l] = -1;
							bc.push_back({ k,l });
						}
					}

				}


			}
			int checking = 0;

			/*

			for (int m=count+1;m<number.size();m++)
			{
				if (number[m]==0)
				{
					checking++;
				}
			}
			if (checking == 0)
			{

			}
			*/

			process(count + 1);
			s[y][x] = 0;
			zero2[count].second[j] = tem;
			number[count]++;



			for (int k = 0; k < xc.size(); k++)
			{
				zero2[xc[k].first].second[xc[k].second] = tem;
				number[k]++;
			}
			for (int k = 0; k < yc.size(); k++)
			{
				zero2[yc[k].first].second[yc[k].second] = tem;
				number[k]++;
			}
			for (int k = 0; k < bc.size(); k++)
			{
				zero2[bc[k].first].second[bc[k].second] = tem;
				number[k]++;
			}
		}





	}


}

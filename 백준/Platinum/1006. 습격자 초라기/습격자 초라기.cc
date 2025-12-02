#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a = 0;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int b, c;
		int t;
		vector<vector<int>> v;
		cin >> b >> c;
		for (int j = 0; j < 2; j++)
		{
			vector <int> temp;
			for (int k = 0; k < b; k++)
			{
				cin >> t;
				temp.push_back(t);
			}
			v.push_back(temp);
		}

		if (b == 1)
		{
			if (v[0][0] + v[1][0] <= c)
				cout << "1\n";
			else
				cout << "2\n";
			continue;
		}
		else if (b == 2)
		{
			int ttt = 0;
			if (v[0][0] + v[1][0] <= c && v[0][1] + v[1][1] <= c)
			{
				ttt += 2;
			}
			else if (v[0][0] + v[0][1] <= c && v[1][0] + v[1][1] <= c)
			{
				ttt += 2;
			}
			else if (v[0][0] + v[1][0] <= c)
			{
				ttt += 3;
			}
			else if (v[0][1] + v[1][1] <= c)
			{
				ttt += 3;
			}
			else if (v[1][0] + v[1][1] <= c)
			{
				ttt += 3;
			}
			else if (v[0][0] + v[0][1] <= c)
			{
				ttt += 3;
			}
			else
			{
				ttt += 4;
			}
			cout << ttt << "\n";
			continue;

		}

		vector<vector<int>> dp1(4, vector<int>(b, b * 2 + 2));
		vector<vector<int>> dp2(4, vector<int>(b, b * 2 + 2));
		vector<vector<int>> dp3(4, vector<int>(b, b * 2 + 2));
		vector<vector<int>> dp4(4, vector<int>(b, b * 2 + 2));


		bool checkdp2 = 0, checkdp3 = 0, checkdp4 = 0;

		//0 둘다한번씩 1 아래 한번 2 위한번 3둘다 못함
		dp1[0][0] = 2;
		dp2[0][0] = 2;
		dp3[0][0] = 2;
		dp4[0][0] = 2;
		if (v[0][0] + v[1][0] <= c)
		{
			dp1[3][0] = 1;
		}
		if (v[0][0] + v[0][b - 1] <= c)
		{
			dp2[1][0] = 2;
			dp4[1][0] = 2;
			checkdp2 = 1;
		}
		if (v[1][0] + v[1][b - 1] <= c)
		{
			dp3[2][0] = 2;
			dp4[2][0] = 2;
			checkdp3 = 1;
		}
		if (checkdp2 == 1 && checkdp3 == 1)
		{
			dp4[3][0] = 2;
			checkdp4 = 1;
		}


		for (int j = 1; j < b - 1; j++)
		{
			if (v[0][j] + v[1][j] <= c)
			{
				dp1[3][j] = min(dp1[3][j],min(dp1[0][j - 1], min(dp1[1][j - 1], min(dp1[3][j - 1], dp1[2][j - 1]))) + 1);
				dp2[3][j] = min(dp2[3][j],min(dp2[0][j - 1], min(dp2[1][j - 1], min(dp2[3][j - 1], dp2[2][j - 1]))) + 1);
				dp3[3][j] = min(dp3[3][j],min(dp3[0][j - 1], min(dp3[1][j - 1], min(dp3[3][j - 1], dp3[2][j - 1]))) + 1);
				dp4[3][j] = min(dp4[3][j],min(dp4[0][j - 1], min(dp4[1][j - 1], min(dp4[3][j - 1], dp4[2][j - 1]))) + 1);
			}
			if (v[0][j - 1] + v[0][j] <= c)
			{
				dp1[1][j] = min(dp1[0][j - 1] + 1, dp1[2][j - 1] + 1);
				if (j != 1)
				{
					dp2[1][j] = min(dp2[0][j - 1] + 1, dp2[2][j - 1] + 1);
					dp4[1][j] = min(dp4[0][j - 1] + 1, dp4[2][j - 1] + 1);
				}
				dp3[1][j] = min(dp3[0][j - 1] + 1, dp3[2][j - 1] + 1);

			}
			if (v[1][j - 1] + v[1][j] <= c)
			{
				dp1[2][j] = min(dp1[0][j - 1] + 1, dp1[1][j - 1] + 1);
				if (j != 1)
				{
					dp3[2][j] = min(dp3[0][j - 1] + 1, dp3[1][j - 1] + 1);
					dp4[2][j] = min(dp4[0][j - 1] + 1, dp4[1][j - 1] + 1);
				}
				dp2[2][j] = min(dp2[0][j - 1] + 1, dp2[1][j - 1] + 1);
			}
			if (v[1][j - 1] + v[1][j] <= c && v[0][j - 1] + v[0][j] <= c)
			{
				dp1[3][j] = min(dp1[3][j],dp1[0][j - 1]);
				if (j != 1)
				{
					dp2[3][j] = min(dp2[3][j], dp2[0][j - 1]);
					dp3[3][j] = min(dp3[3][j], dp3[0][j - 1]);
					dp4[3][j] = min(dp4[3][j], dp4[0][j - 1]);
				}
			}

			dp1[0][j] = min(dp1[0][j], min(dp1[0][j - 1], min(dp1[1][j - 1], min(dp1[2][j - 1], dp1[3][j - 1]))) + 2);
			dp2[0][j] = min(dp2[0][j], min(dp2[0][j - 1], min(dp2[1][j - 1], min(dp2[2][j - 1], dp2[3][j - 1]))) + 2);
			dp3[0][j] = min(dp3[0][j], min(dp3[0][j - 1], min(dp3[1][j - 1], min(dp3[2][j - 1], dp3[3][j - 1]))) + 2);
			dp4[0][j] = min(dp4[0][j], min(dp4[0][j - 1], min(dp4[1][j - 1], min(dp4[2][j - 1], dp4[3][j - 1]))) + 2);
		}
		if (v[0][b - 1] + v[1][b - 1] <= c)
		{
			dp1[3][b - 1] = min(dp1[0][b - 1 - 1], min(dp1[1][b - 1 - 1], min(dp1[3][b - 1 - 1], dp1[2][b - 1 - 1]))) + 1;
		}
		if (v[0][b - 1 - 1] + v[0][b - 1] <= c) //위 2칸, dp2 위 ,dp3 아래
		{
			dp1[1][b - 1] = min(dp1[0][b - 1 - 1] + 1, dp1[2][b - 1 - 1] + 1);
			dp3[1][b - 1] = min(dp3[0][b - 1 - 1], dp3[2][b - 1 - 1]);
		}
		if (v[1][b - 1 - 1] + v[1][b - 1] <= c) //아래2칸
		{
			dp1[2][b - 1] = min(dp1[0][b - 1 - 1] + 1, dp1[1][b - 1 - 1] + 1);
			dp2[1][b - 1] = min(dp2[0][b - 1 - 1], dp2[1][b - 1 - 1]);
		}
		if (v[1][b - 1 - 1] + v[1][b - 1] <= c && v[0][b - 1 - 1] + v[0][b - 1] <= c)
		{
			dp1[3][b - 1] = min(dp1[3][b - 1],dp1[0][b - 1 - 1]);
		}

		dp1[0][b - 1] = min(dp1[0][b - 1], min(dp1[0][b - 1 - 1], min(dp1[1][b - 1 - 1], min(dp1[2][b - 1 - 1], dp1[3][b - 1 - 1]))) + 2);
		dp2[0][b - 1] = min(dp2[0][b - 1], min(dp2[0][b - 1 - 1], min(dp2[1][b - 1 - 1], min(dp2[2][b - 1 - 1], dp2[3][b - 1 - 1]))) + 1);
		dp3[0][b - 1] = min(dp3[0][b - 1], min(dp3[0][b - 1 - 1], min(dp3[1][b - 1 - 1], min(dp3[2][b - 1 - 1], dp3[3][b - 1 - 1]))) + 1);




		int dp1min = min({ dp1[0][b - 1], dp1[1][b - 1], dp1[2][b - 1],dp1[3][b - 1] });
		int dp2min = (checkdp2 == 1 ? min({ dp2[0][b - 1], dp2[1][b - 1], dp2[2][b - 1],dp2[3][b - 1] }) : b * 2 + 2);
		int dp3min = (checkdp3 == 1 ? min({ dp3[0][b - 1], dp3[1][b - 1], dp3[2][b - 1],dp3[3][b - 1] }) : b * 2 + 2);
		int dp4min = (checkdp4 == 1 ? min({ dp4[0][b - 2], dp4[1][b - 2], dp4[2][b - 2],dp4[3][b - 2] }) : b * 2 + 2);



		//0 둘다 가능 1 위만 2아래만
		cout << min(dp1min, min(dp2min, min(dp3min, dp4min))) << "\n";

	}
}
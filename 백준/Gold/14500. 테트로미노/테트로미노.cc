#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

vector <vector <int>> v;

int main()
{

	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		int tt;
		vector <int>t;
		for (int j = 0; j < b; j++)
		{
			cin >> tt;
			t.push_back(tt);



		}
		v.push_back(t);
	}
	int max = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= b-4; j++)
		{
			int gg = 0;
			for (int k = 0 ; k < 4; k++)
			{
				gg += v[i][j+k];
			}
			if (gg > max)
			{
				max = gg;
			}
		}

	}
	for (int i = 0; i <= a-4; i++)
	{
		for (int j = 0; j < b; j++)
		{
			int gg = 0;
			for (int k = 0; k < 4; k++)
			{
				gg += v[i+k][j];
			}
			if (gg > max)
			{
				max = gg;
			}
		}

	}
	for (int i = 0; i <= a - 2; i++)
	{
		for (int j = 0; j <= b - 2; j++)
		{
			int gg = 0;
			for (int k = 0; k < 4; k++)
			{
				gg += v[i + k % 2][j + k / 2];
			}

			if (gg > max)
			{
				max = gg;
			}
		}
	}

	for (int i = 0; i <= a - 3; i++)
	{
		for (int j = 0; j <= b - 2; j++)
		{
			int sum = 0;
			for (int k = 0; k < 6; k++)
			{
				sum += v[i+k%3][j+k/3];

			}
			
			for (int k = 0; k < 6; k++)
			{
				for (int l = 0; l < 6; l++)
				{
					int sum1 = sum;
					if (k == l||(k==1&&l==4)|| (l == 1 && k == 4) 
						|| (k == 0 && l == 4) || (l == 0 && k == 4)
						|| (k == 1 && l == 5) || (l == 1 && k == 5)
						|| (k == 2 && l == 4) || (l == 2 && k == 4)
						|| (k == 1 && l == 3) || (l == 1 && k == 3)
						)
					{
						continue;
					}
					else
					{
						sum1 -= v[i + k % 3][j + k / 3];
						sum1 -= v[i + l % 3][j + l / 3];

						if (sum1 > max)
						{
							max = sum1;
						}
					}
					

				}
			}

			
		}
	}
	for (int i = 0; i <= a - 2; i++)
	{
		for (int j = 0; j <= b - 3; j++)
		{
			int sum = 0;
			for (int k = 0; k < 6; k++)
			{
				sum += v[i + k / 3][j + k % 3];

			}

			for (int k = 0; k < 6; k++)
			{
				for (int l = 0; l < 6; l++)
				{
					int sum1 = sum;
					if (k == l || (k == 1 && l == 4) || (l == 1 && k == 4)
						|| (k == 0 && l == 4) || (l == 0 && k == 4)
						|| (k == 1 && l == 5) || (l == 1 && k == 5)
						|| (k == 2 && l == 4) || (l == 2 && k == 4)
						|| (k == 1 && l == 3) || (l == 1 && k == 3)
						)
					{
						continue;
					}
					else
					{
						sum1 -= v[i + k / 3][j + k % 3];
						sum1 -= v[i + l / 3][j + l % 3];

						if (sum1 > max)
						{
							max = sum1;
						}
					}
					

				}
			}


		}
	}
	
	
	
	
	cout << max;



}
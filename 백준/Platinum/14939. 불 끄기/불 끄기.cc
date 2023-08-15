#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>
#define ll long long
using namespace std;

int N, M;

vector <vector <int>> v1;

vector <vector <int>> v2;
int solved(vector<vector<int>> &v)
{
	int count = 0;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (v[i][j] == 1)
			{
				count++;
				v[i][j] ^= 1;
				v[i + 1][j] ^= 1;
				if (j != 0)
				{
					v[i + 1][j - 1] ^= 1;
				}
				if (j != M - 1)
				{
					v[i + 1][j + 1] ^= 1;
				}
				if (i != N - 2)
				{
					v[i + 2][j] ^= 1;
				}
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (v[9][i] == 1)
		{
			return -1;
		}
	}
	return count;
}

int main()
{
	N = 10;
	M = 10;
	for (int i = 0; i < N; i++)
	{
		string k;
		vector <int> t;
		cin >> k;
		for (int j = 0; j < M; j++)
		{
			
			if (k[j] == 'O')
			{
				t.push_back(1);
			}
			else
			{
				t.push_back(0);
			}
			
		}
		v1.push_back(t);
	}
	int a[10];
	int count = 0;
	int min = 100000000;
	for (a[1] = 0; a[1] < 2; a[1]++)
	{
		for (a[2] = 0; a[2] < 2; a[2]++)
		{
			for (a[3] = 0; a[3] < 2; a[3]++)
			{
				for (a[4] = 0; a[4] < 2; a[4]++)
				{
					for (a[5] = 0; a[5] < 2; a[5]++)
					{
						for (a[6] = 0; a[6] < 2; a[6]++)
						{
							for (a[7] = 0; a[7] < 2; a[7]++)
							{
								for (a[8] = 0; a[8] < 2; a[8]++)
								{
									for (a[9] = 0; a[9] < 2; a[9]++)
									{
										for (a[0] = 0; a[0] < 2; a[0]++)
										{
											v2 = v1;
											count = 0;
											for (int i = 0; i < 10; i++)
											{
												if (a[i] == 1)
												{
													count++;
													v2[0][i] ^= 1;

													if (i != 0)
													{
														v2[0][i - 1] ^= 1;
													}
													if (i != 9)
													{
														v2[0][i + 1] ^= 1;
													}
													v2[1][i] ^= 1;
												}
											}
											int gt = solved(v2);
											if (gt == -1)
											{
												continue;
											}
											else
											{
												count += gt;
											}
											if (count < min)
											{
												min = count;
											}

										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << min;
}
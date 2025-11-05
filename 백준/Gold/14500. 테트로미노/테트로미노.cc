#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
vector<vector<int>>v;
int N, M;
int maximum = 0;
bool check_range;
vector<vector<int>>block;


int counting(int n, int m, int num)
{
	vector <int> t = block[num];
	bool is_overflow = 0;
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		int x = t[i] % 4;
		int y = t[i] / 4;
		if (y + n < N && x + m < M)
		{
			is_overflow = 0;
			sum += v[y + n][x + m];
		}
		else
		{
			is_overflow = 1;
			break;
		}

	}
	if (is_overflow)
	{
		return -1;
	}
	else
	{
		if (maximum < sum)
		{
			maximum = sum;
		}
		return sum;
	}
}

void create_block()
{
	vector <int> t(4, 0);
	for (t[0] = 0; t[0] < 16; t[0]++)
	{
		for (t[1] = t[0] + 1; t[1] < 16; t[1]++)
		{
			for (t[2] = t[1] + 1; t[2] < 16; t[2]++)
			{
				for (t[3] = t[2] + 1; t[3] < 16; t[3]++)
				{

					vector <int> tmp(16, 0);
					bool is_overflow = 0; //넘침 판정 변수
					bool is_adjacent = 1; //인접 판정 변수
					int sum = 0;
					int check_block = 0;

					for (int i = 0; i < 4; i++)
					{
						tmp[t[i]] = 1; //표기해주기
					}
					for (int i = 0; i < 4; i++)
					{
						vector <int> dir = { -1,1,-4,4 };
						for (int j = 0; j < 4; j++)
						{
							if (dir[j] + t[i] < 16 && dir[j] + t[i] >= 0) //넘침 판정
							{
								if (tmp[dir[j] + t[i]] == 1) //상하좌우에 1이 있으면
								{
									if (!(j < 2 && ((dir[j] + t[i]) / 4) != (t[i] / 4))) //좌우 배치판정 중, 기준 칸과 체크 칸이 줄이 같지않으면 제외
									{ // 쉽게말해, 16칸으로 표현했을때 3과 4는 좌우로 붙어있지만, 실제로는 줄이 다르기 때문에 제외해야함
										check_block += 1;

									}
								}
							}

						}
					}

					if (check_block < 6) //상호 인접한 칸이 6칸 미만이면 제외 (블록이 될 수 없음)
					{
						continue;
					}
					else
					{
						block.push_back(t);
					}
				}
			}
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	v.resize(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> v[i][j];
		}
	}
	create_block();//블록 생성


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int k = 0; k < block.size(); k++)
			{
				int tmp = counting(i, j, k);

				if (tmp > maximum)
				{
					maximum = tmp;
				}

			}
		}
	}
	cout << maximum;

}



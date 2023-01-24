#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;


int main()
{

	int a, b;
	char fr3[22], fr4[22];
	string fr1, fr2;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		map <string, int> s;
		map <string, int> tems;
		vector <int> fr(100001, -1);
		vector <set<string>> t;
		t.push_back({""});
		scanf("%d", &b);
		int check = 0;
		for (int j = 0; j < b; j++)
		{


			scanf("%s", fr3);
			scanf("%s", fr4);


			fr1 = fr3;
			fr2 = fr4;

			if (fr[tems[fr1]] != -1 && fr[tems[fr2]] != -1)
			{
				bool tr = 0;
				int wnth2 = tems[fr2];
				int wnth1 = tems[fr1];
				if (tems[fr1] != tems[fr2])
				{
					int f1 = s[fr1], f2 = s[fr2];

					if (t[wnth2].size() > t[wnth1].size())
					{
						fr[tems[fr2]]+= fr[tems[fr1]];
						for (auto k : t[wnth1])
						{
							tems[k] = tems[fr2];
							t[wnth2].insert(k);

						}
						t[wnth1] = {};
						fr[tems[fr1]] = fr[tems[fr2]];


					}
					else
					{
						fr[tems[fr1]] += fr[tems[fr2]];
						for (auto k : t[wnth2])
						{
							s[k] = f1 + f2;
							tems[k] = tems[fr1];
							t[wnth1].insert(k);

						}
						t[wnth2] = {};
						fr[tems[fr2]] = fr[tems[fr1]];

					}




				}
			}
			else if (fr[tems[fr1]] != -1 && fr[tems[fr2]] == -1)
			{
				t[tems[fr1]].insert(fr2);
				tems[fr2] = tems[fr1];
				fr[tems[fr1]]++;


			}
			else if (fr[tems[fr1]] == -1 && fr[tems[fr2]] != -1)
			{
				t[tems[fr2]].insert(fr1);
				tems[fr1] = tems[fr2];
				fr[tems[fr2]]++;
			}
			else if (fr[tems[fr1]] == -1 && fr[tems[fr2]] == -1)
			{
				set <string> tem;
				tem.insert(fr1);
				tem.insert(fr2);
				t.push_back(tem); //s[글자]는 원래는 친구 개수였으나, 친구개수는 friend 에 저장할 것 이므로 쓸모가 없어짐.
				tems[fr1] = check+1;//tems에 배열 위치가 저장 되고 있음. 이걸 활용해 값을 가르키는 주소를 만들자.
				tems[fr2] = check+1;
				fr[check+1] = 2;
				check++;
			}
			printf("%d\n", fr[tems[fr1]]);
		}

	}
}
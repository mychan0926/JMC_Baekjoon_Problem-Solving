#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;
vector <int> s;
vector <int> s1(8,0);
map <vector <int>, vector<int>,greater <vector <int>>> m;
vector <vector <int>> check;
vector <vector <int>> tru;
int AN, AM,c=0;
void prf(int N,int M)
{
	if (M != 0)
	{
		M--;
		
		for (int i = N; i <= AN; i++)
		{
			s.push_back(i);
			s1[i - 1]++;
			prf(i,M);
			s1[i - 1]--;
			s.pop_back();
		}
		
		return;
		//재귀처리
	}
	else
	{
		m.insert(make_pair(s1,s));
		//출력
	}
}

int main()
{
	
	cin >> AN >> AM;

	prf(1, AM);

		for (auto k:m)
		{
			for (int i = 0; i<k.second.size(); i++)
			{
				printf("%c ", k.second[i]+'0');
			}
			printf("\n");
		}




}
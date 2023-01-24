#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector <int> s;
int AN, AM;
void prf(int N,int M)
{
	if (M != 0)
	{
		M--;
		
		for (int i = 1; i <= AN; i++)
		{
			s.push_back(i);
			prf(i,M);
			s.pop_back();
		}
		
		return;
		//재귀처리
	}
	else
	{
		for (int i = 0; i < AM; i++)
		{
			cout << s[i] << ' ';
		}
		cout << "\n";
		//출력
	}
}

int main()
{
	
	cin >> AN >> AM;

	prf(1, AM);



}
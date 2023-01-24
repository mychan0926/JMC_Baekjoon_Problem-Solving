#include <iostream>

using namespace std;
int coun=0;
void hanoi(int N, int start, int to, int via)
{
	if (N == 1)
	{
		cout << start << " " << to << "\n";
	}
	else
	{
		hanoi(N - 1,start, via, to);
		cout << start<<" "<<to<<"\n";
		hanoi(N - 1, via, to, start);
	}
}
void hanoicount(int N, int start, int to, int via)
{

	if (N == 1)
	{
		coun++;
	}
	else
	{
		hanoicount(N - 1, start, via, to);
		coun++;
		hanoicount(N - 1, via, to, start);
	}
}
int main()
{
	int a, b, c, d ;
	cin >> a;
	hanoicount(a, 1, 3, 2) ;
	cout << coun << "\n";
	hanoi(a, 1, 3, 2);
}
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <math.h>
using namespace std;

int main()
{
	float W, H, X, Y, P;//너비.높이,모서리x,y,선수 수
	float  b, c, d;
	int a = 0;
	cin >> W>> H>> X>> Y>> P;
	float R = H / 2;
	for (int i = 0; i < P; i++)
	{
		int dex;
		int dey;
		
		cin >> dex>>dey;
		if (X <= dex && dex <= X + W && Y <= dey && dey <= Y + H)
		{
			a++;
		}
		else if(pow(X - dex, 2) + pow((Y + H / 2) - dey, 2) <= pow((H / 2),2) || pow(X + W - dex, 2) + pow((Y + H / 2) - dey, 2) <= pow((H / 2), 2))
		{
			a++;
		}
	}
	cout << a;

}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	char a, b, c;
	int N, M,L=0;
	int count = 0;
	int save = 64;
	string text;
	cin >> N;
	M = 0;
	while(1)
	{
		text = to_string(M);
		int len = text.size();

		for (int i = 0; i < len - 2; i++)
		{
			if (text[0+i] == text[1 + i] && text[1 + i] == text[2 + i]&&text[2 + i]=='6')
			{
				L++;
				if (L==N)
				{
					cout << M;
					return 0;
				}
				break;

			}
		}
		
		M++;
	}



}
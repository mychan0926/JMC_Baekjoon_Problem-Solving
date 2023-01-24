#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char a, b, c;
	int X, Y;
	int count = 0;
	int save = 64;
	vector <vector <char>> s(50, vector<char>(50, 0));
	cin >> Y>>X;



	for (int i = 0; i < Y; i++) //y
	{
		for (int j = 0; j < X; j++) //x
		{

			cin >> s[j][i];

		}
	}
	for (int i = 0; i < Y-7; i++) //y
	{
		for (int j = 0; j < X-7; j++) //x
		{

			count = 64;

			for (int k = i; k < 8+i; k++) //y
			{
				for (int l = j; l < 8+j; l++) //x
				{

						if ((l + k) % 2 == 0 && s[l][k] == 'W')
						{
							count--;
						}
						else if ((l + k) % 2 != 0 && s[l][k] == 'B')
						{
							
							count--;
						}
				}
			}
			if (count < save)
			{
				save = count;
			}
			count = 64;
			for (int k = i; k < 8 + i; k++) //y
			{
				for (int l = j; l < 8 + j; l++) //x
				{

					if ((l + k) % 2 == 0 && s[l][k] == 'B')
					{
						count--;
					}
					else if ((l + k) % 2 != 0 && s[l][k] == 'W')
					{

						count--;
					}
				}
			}
			if (count < save)
			{
				save = count;
			}





		}
	}
	cout << save;
}
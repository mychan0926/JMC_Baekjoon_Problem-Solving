#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c;
	string tmp;
	string word;
	cin >> a;
	cin >> word;
	int counting = 0;
	for (int i = 0; i < a; i++)
	{
		cin >> tmp;
		int wordmax = (tmp.size() - word.size()) / (word.size() - 1);
		for (int j = 0; j <= wordmax; j++)
		{
			int check=0;
			int able_range = tmp.size() - (j * (word.size() - 1))-word.size();

			for (int k = 0; k <= able_range; k++)
			{
				bool eq = 1;
				for (int l=0;l<word.size();l++)
				{
					if (word[l]!=tmp[l+j*l+k])
					{
						eq = 0;
					}
				}


				if (eq == 1)
				{
					check = 1;
					break;
				}

			}


			if (check==1)
			{
				counting++;
				break;
			}
			
		}

	}
	cout << counting;
}
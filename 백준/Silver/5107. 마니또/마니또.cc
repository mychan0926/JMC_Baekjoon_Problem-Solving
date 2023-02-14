#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
using namespace std;

void process(int count);
int main()
{
	int er;
	int p = 0;
	while (1)
	{

	cin >> er;
	int a = er;
	if (er == 0)
	{
		break;
	}
		int b, c, d, e;
		map <string, string> list;
		map <string, int> check_int;
		map <int, string> check_string;
		vector <int> boo(a, 0);
		for (int i = 0; i < a; i++)
		{
			string t1, t2;
			cin >> t1 >> t2;
			list[t1] = t2;
			check_int[t1] = i;
			check_string[i] = t1;
		}
		int count = 0;
		for (int i = 0; i < a; i++)
		{
			if (boo[i] == 0)
			{
				count++;
				string t = check_string[i];
				string ce = t;
				while (1)
				{

					if (list[ce] != t)
					{
						boo[check_int[list[ce]]] = 1;
						ce = list[ce];
					}
					else {
						break;
					}

				}
			}

		}
		cout<<p+1 <<" "<< count<<"\n";
		p++;
	}


	
}

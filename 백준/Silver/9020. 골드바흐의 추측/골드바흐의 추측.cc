#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int b = 0;
	int c = 0;
	int root=0;
	int save = 0;
	int load=0;
	int savea, saveb;
	cin >> root;
	int count = 0;
	vector <int> a(30000);
	vector <int> list(10000);
	for (int i = 2; i < 10050; i++)
	{
		if (a[i] != 1)
		{
			list[count]=i;
			count++;
			for (int j = 2; j < (30001 / i); j++)
			{
				a[j * i] = 1;
			}
		}
	}
	for (int i = 0; i < root; i++)
	{
		save = 0;
		load = 10000;
		savea = 0; 
		saveb=0;
		cin >> b;
		for (int j = 0; j < count; j++)
		{
			if (b <= list[j])
			{
				save = j;
				break;
			}
		}
		for (int k = 0; k < save; k++)
		{
			for (int l = 0; l < save; l++)
			{
				if (list[k] + list[l] == b && abs(list[k] - list[l]) < load)
				{
					load = abs(list[k] - list[l]);
					savea = list[k];
					saveb = list[l];
				}
			}
		}
		cout << savea << " " << saveb<< "\n";

	}


}
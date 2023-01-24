#include <iostream>
#include <string>

using namespace std;

int main()
{

	int a=0, b=0, n, m;
	string txt;
	getline(cin,txt);

	for (int i=0;i<txt.size()-2;i++)
	{
		if (txt[i] == ':')
		{
			if (txt[++i] == '-')
			{
				if (txt[++i] == ')')
				{
					a++;
				}
				else if (txt[i]=='(')
				{
					b++;
				}
			}
		}

	}
	if (a > b)
	{
		cout << "happy";
	}
	else if (b > a)
	{
		cout << "sad";
	}
	else if (a == 0 & b == 0)
	{
		cout << "none";
	}
	else if(a == b)
	{
		cout << "unsure";
	}
}
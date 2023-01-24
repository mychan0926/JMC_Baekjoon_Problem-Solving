#include <iostream>
#include <vector>
#include <set>
#include <math.h>

using namespace std;
int main()
{

	while(1)
	{
	set <float> s;
	float a, b, c;
	float sizes[4];
	int x, y;
	int count=0;
	cin >> a >> b >> c;
	if (a == 0 && b == 0 && c == 0)
	{
		break;
	}
	s.insert(a);
	s.insert(b);
	s.insert(c);
	for (set <float>::iterator i = s.begin(); i != s.end(); i++)
	{
		sizes[count] = *i;
		count++;
	}
	if (pow(sizes[2], 2) == pow(sizes[1],2) + pow(sizes[0], 2))
	{
		cout << "right"<<"\n";

	}
	else
	{
		cout << "wrong" << "\n";
	}
	}

}
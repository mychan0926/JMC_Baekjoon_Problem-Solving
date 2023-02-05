#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	string n;
	cin >> n;
	float t = 0;
	cout << fixed;
	cout.precision(1);
	if (n[0] == 'F')
	{
		cout << 0.0;
		return 0;
	}
	t += 4 - n[0]+'A';
	if (n[1] == '+')
	{
		t += 0.3;
	}
	else if(n[1] == '-')
	{
		t -= 0.3;
	}
	
	cout << t;
}
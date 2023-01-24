#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a=0, b,c,count=0;
	string str;
	vector <int> s;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		a += str[i] - '0';
		if (str[i]=='0') {
			count++;
		}
	}
		
	sort(str.begin(), str.end());
	if (a % 3 == 0 &&count!=0){
		for (int i = 0; i < str.size(); i++) {
			cout<<str[str.size() - i - 1];
		}
	}
	else
	{
		cout << -1;
	}
		

}
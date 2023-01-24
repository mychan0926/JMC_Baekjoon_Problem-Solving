#include <iostream>
#include <vector>
using namespace std;
bool check[9];
vector<int> p;
int a, b;
void refill(int n) {
	if (n > a || check[n] == 1) return;
	p.push_back(n);
	check[n] = 1;
	if (p.size() == b) {
		for (auto it : p) {
			cout << it << ' ';
		}
		cout << '\n';
		p.pop_back();
		check[n] = 0;
		return;
	}
	for (int i = 1; i <= a; i++) {
		refill(i);
	}
	p.pop_back();
	check[n] = 0;
}

int main()
{
	cin >> a >> b;

	for (int i = 1; i <= a; i++) {
		refill(i);
	}
}
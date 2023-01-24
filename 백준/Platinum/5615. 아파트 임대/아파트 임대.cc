#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

using ull = unsigned long long;

ull fast_ipow(ull x, ull y, ull z) {
	ull tmp = 1LL;
	x %= z;
	while (y) {
		if (y & 1)   //if y is odd number
			tmp = ((tmp % z) * (x % z)) % z;
		y >>= 1;
		x = ((x % z) * (x % z)) % z;
	}
	return tmp;
}
ull isPrime_MillerRabin(ull p) {
	ull a[] = { 2,3,61,LLONG_MAX,2,3,5,7,11,13,17,19,23,29,31,37,LLONG_MAX };	//LLONG_MAX is composite number
	ull i = p <= UINT_MAX ? 0 : 4;
	while (a[i] < p) {
		ull s = p - 1;
		while (1) {
			ull r = fast_ipow(a[i], s, p);
			if (r == p - 1) break;	// p is probably a prime.
			if (s & 1) {	//if s is odd number
				if (r == 1)break;	// p is probably a prime.
				else return 0;	// s is composite
			}
			s >>= 1;
		}
		i++;
	}
	return p < 2 ? 0 : p != LLONG_MAX;
}

int main()
{
    vector <int>s = { 2, 3, 5, 7, 11, 13 };

    long long int A,N, M=0,P=0;
	cin >> A;
	for(int i=0;i<A;i++)
	{
		cin >> P;
		if (1 == isPrime_MillerRabin(2 * P + 1))
		{
			M++;
		}
	}
	cout << M;
    
    
    


}
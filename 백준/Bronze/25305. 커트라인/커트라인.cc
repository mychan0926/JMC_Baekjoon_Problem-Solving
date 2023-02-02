#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main()
{
    long long X, N, a, b;
    multiset <int> s;
    cin >> X;
    cin >> N;
    for (int i = 0; i < X; i++)
    {
        cin>>a;
        s.insert(-a);

    }
    for (int i = 0; i < N-1; i++)
    {
        s.erase(s.begin());

    }
    cout << -1**s.begin();


}
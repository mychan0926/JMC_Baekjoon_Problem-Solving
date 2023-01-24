#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main()
{
    long long X, N, a, b;
    cin >> X;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        X -= a * b;


    }
    if (X != 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

}
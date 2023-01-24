#include <iostream>
using namespace std;

int main()
{
    int a, b;
    b = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        b += a;
    }
    cout << b;
}
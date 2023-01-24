#include <iostream>
#include <set>
#include <vector>

using namespace std;
int r=0;

int fib(int n) {
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
        
    }

} 
int main()
{
    int a;
    cin >> a;
    cout << fib(a) ;
    cout << ' ' << a-2;
}
#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c=0;
    cin >> a;
    for (long long int i = 1; i < a+1; i++)
    {
        if ((a-i)>i)
        {
            a -= i;
            c ++ ;
        }
        else if (a - i == 0)
        {
            c++;
            cout << c;
        }
    }

}
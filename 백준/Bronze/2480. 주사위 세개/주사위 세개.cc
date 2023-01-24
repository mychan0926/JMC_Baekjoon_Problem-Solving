#include <iostream>
using namespace std;
int main()
{
    int a[6];
    int b;
    int c = 0;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    a[3] = a[0];
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
            b = a[i];

        }
        
        if (c < a[i])
        {
            c = a[i];
           
        }
    }
    if (count == 1)
    {
        cout << 1000 + b * 100;
    }
    else if (count == 2 || count ==3)
    {
        cout << 10000 + b * 1000;
    }
    else
    {
        cout << c * 100;
       
    }
    
}
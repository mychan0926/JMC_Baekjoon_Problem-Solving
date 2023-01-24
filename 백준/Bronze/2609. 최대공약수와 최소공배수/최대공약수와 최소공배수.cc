#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int A, N = 0, C, N2=1,P1=0,P2=0,P3=0;
    
    cin >> A>>C;
    for (int i = 2; i <= 10000; i++)
    {
        if (A%i == 0 && C%i == 0)
        {
            N2 = i;
            if (i > A && i > C)
            {
                break;
            }
        }
    }
    cout << N2 << "\n";
    for (int i = 1; i <= 100000000; i++)
    {
        if (i % A == 0 && i % C == 0)
        {
            cout << i;
            break;
        }
    }


    
    
    



    

}
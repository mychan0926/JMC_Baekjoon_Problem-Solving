#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int A, N = 0, C, N2=1000000,P1=0,P2=0,P3=0;
    while (1)
    {
        cin >> A>>C;
        if (A == 0 && C == 0)
        {
            break;
        }
        if (C % A==0)
        {
            cout << "factor\n";
        }
        else if (A%C == 0)
        {
            cout << "multiple\n";
        }
        else 
        {
            cout << "neither\n";
        }
        
    }
    
    



    

}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;
string spin(int a, int b)
{
    for(int i=2;i<1001;i++)
    {
        while (1)
        {
            if (a % i == 0 && b % i == 0)
            {
                a /= i;
                b /= i;
            }
            else
            {
                break;
            }
        }
    }
    
        return to_string(a) + "/" + to_string(b);
 }
    

int main()
{
    
    int A,N, M=10,P=0;
    cin >> A;
    cin >> N;
    for (int i = 0; i < A-1; i++)
    {
        cin >> M;
        cout <<spin(N, M)<<"\n";
    }
    

}
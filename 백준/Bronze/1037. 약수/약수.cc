#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int A, N = 0, C, N2=1000000;

    cin >> C;
    for (int i = 0; i < C; i++)
    {

        cin >> A;
        if (A > N)
        {
            N = A;
        }
        if (A < N2)
        {
            N2 = A;
        }

    }
    cout << N * N2;


    

}
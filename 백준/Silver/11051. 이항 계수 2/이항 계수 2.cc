#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;
int memo[1001][1001] = {0};
int C = 0;


int main()
{
    

    long long int K,N, M=10,P=0;
    cin >> N;
    cin >> K;
    for (int i = 0; i < N+1; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (i==0 || i==j)
            {
                memo[i][j] = 1;
            }
            else
            {
                memo[i][j] = (memo[i - 1][j] + memo[i - 1][j - 1]) % 10007;
            }
        }
    }
    cout << memo[N][K];
    

    

}
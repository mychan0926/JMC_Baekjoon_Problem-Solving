#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;
int pac(int a)
{
    int sum = 1;
    for (int i = 1; i <= a; i++)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    
    int K,N, M=10,P=0;
    cin >> N;
    cin >> K;
    cout << pac(N) / (pac(K) * pac(N - K));
    
    

}
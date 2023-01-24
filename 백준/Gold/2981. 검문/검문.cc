#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;
int gcd(long long int a, long long int b)
{
        long long int tmp = 0;
        while (b != 0)
        {
            if (a >= b)
            {
                a = a % b;
                if (!(a > b))
                {
                    tmp = a;
                    a = b;
                    b = tmp;
                }
            }
            else
            {
                tmp = a;
                a = b;
                b = tmp;
            }
        }
        return a;
 }
    

int main()
{
    vector <long long int>s;
    vector <long long int>s2;
    vector <long long int>s3;
    long long int A,N, M=100000000000,P=0;

	cin >> A;
    for(int i=0; i<A;i++)
    {
        cin >> N;
        s.push_back(N);
    }
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < A; j++)
        {
            if (s[i] > s[j])
            {
                if (s[i] - s[j] < M)
                {
                    s3.push_back((s[i] - s[j]));
                    
                }
            }
        }
    } 

    long long int gc = s3[0];
    for (int i = 1; i < s3.size(); i++)
    {
        gc=gcd(gc, s3[i]);

    }
    M = gc;
    P = sqrt(M);
   
    for (int i = 1; i < P + 1; i++)
    {
        if (M % i == 0)
        {
            s2.push_back(i);
        }
    }
    long long int j = s2.size();
    for (int i = 1; i < j; i++)
    {
        s2.push_back(M / s2[i]);

    }
    
    sort(s2.begin(), s2.end());

    s2.erase(unique(s2.begin(), s2.end()), s2.end());


    for (int i = 1; i < s2.size(); i++)
    {
        cout << s2[i] << " ";

    }
    cout << M;

}
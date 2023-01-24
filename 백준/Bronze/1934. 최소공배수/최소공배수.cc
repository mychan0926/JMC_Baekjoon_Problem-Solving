#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int A, N = 1, C, N2=1,P1=0,P2=0,P3=0;
   

    cin >> A;

    for (int i = 0; i < A;i++)
    {
        vector <int> s1(45001, 0);
        vector <int> s2(45001, 0);
        N = 1;
        cin >> C;
        while (1)
        {
            N++;
            while (1)
            {
                if (C % N == 0)
                {
                    s1[N]++;
                    C /= N;
                }
                else
                {
                    break;
                }
            }
            if (C == 1)
            {
                break;
            }
        }
        cin >> C;
        N = 1;
        while (1)
        {
            N++;
            while (1)
            {
                if (C % N == 0)
                {
                    s2[N]++;
                    C /= N;
                }
                else
                {
                    break;
                }
            }
            if (C == 1)
            {
                break;
            }
        }
        N = 1;
        for (int i = 1; i <= 45000; i++)
        {
            if (s1[i] > s2[i])
            {
                N *= pow(i, s1[i]);
            }
            else if(s1[i]<s2[i])
            {
                N *= pow(i, s2[i]);
            }
            else if (s1[i] == s2[i]&&s1[i]!=0)
            {
                N *= pow(i, s1[i]);
            }
        }
        cout << N<<"\n";

    }

}
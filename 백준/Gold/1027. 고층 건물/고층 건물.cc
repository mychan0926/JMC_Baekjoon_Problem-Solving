#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int>s;
    int A,N, M,V=0;
    double a, b, c;
    cin >> N;

    s.push_back(1);
    for (int i = 1; i < N+1; i++)
    {
        cin >> A;
        s.push_back(A);
    }
    for (int i = 1; i < N+1; i++) //확정
    {
        int S = 0;
        
        for (int j = 1; j < N+1; j++) //탐색
        {
            int C = 0;
            int x, y, r;
            if (i != j)
            {
                

                a = (s[i] - s[j]) / (double)(i - j);
                b = s[i] - a * i;
                if (i > j)
                {
                    for (int k = j + 1; k < i; k++)
                    {

                        if (s[k] >= a * k + b)
                        {
                            C++;
                        }
                    }
                }
                else if (i < j)
                {
                    for (int k = i + 1; k < j; k++)
                    {
                        if (s[k] >= a * k + b)
                        {
                            C++;
                        }
                    }
                }
                if (C == 0)
                {
                    S++;
                }

            }
            
        }
        if (V < S)
        {
            V = S;
        }
       
    }
    cout << V;

}
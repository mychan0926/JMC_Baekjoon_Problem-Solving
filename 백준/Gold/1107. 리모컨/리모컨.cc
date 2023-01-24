#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
vector <int> s;
vector <int> v;
vector <int> txt(6,0);
int a, b=100, c, n, m;
bool zero = 0;
int distancee = 5000000;
int To_int(vector <int> w);
void check(int p);
bool Zero_check(int g);
int int_len(int d);
int main()
{

    cin >> n;
    distancee = abs(n - 100);
    for (int i = 0; i < 10; i++)
    {
        s.push_back(i);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int tem;
        cin >> tem;
        if (tem != 0)
        {
            s[tem] = -1;
        }
        else
        {
            zero = 1;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        if (s[i] != -1)
        {
            v.push_back(s[i]);
        }
    }
    check(0);
    cout << distancee ;
}
void check(int p)
{
    if (p == 6)
    {
        int tem = To_int(txt);
        /**
        if (!(Zero_check(tem) ==1 && zero==1))
        {
        **/
            if (distancee > abs(n - tem) + int_len(tem))
            {
                distancee = abs(n - tem) + int_len(tem);
                b = tem;
            }
        /**}**/
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            txt[p] = v[i];
            check(p + 1);
            txt[p] = 0;
        }
    }

}
int To_int(vector <int> w)
{
    int t = 0;
    int g = 0;
    int zerot = 0;
    for (int i = 0; i < w.size(); i++)
    {

        if ((w[i] != 0 &&g==0)||(w[i]!=0&&i==0&&g==0) )
        {
            g = 1;
        }
        else if (w[i] == 0 && g == 1 && zero == 1)
        {
            t = 50000000;
        }
        if (w[i] != 0)
        {
            zerot = 1;
            t += w[i] * (pow(10, 5 - i));
        }
        
    }
    if (zerot == 0&&zero==1)
    {
        return 5000000;
    }
    return t;
}
int int_len(int d)
{
    int t = 0;
    if (d == 100)
    {
        t = 0;
    }
    else if (d < 10)
    {
        t = 1;
    }
    else if (d < 100)
    {
        t = 2;
    }
        else if (d < 1000)
        {
            t = 3;
        }
        else if (d < 10000)
        {
            t = 4;
        }
        else if (d < 100000)
        {
            t = 5;
        }
        else if (d < 1000000)
        {
            t = 6;
        }


    return t;
}
bool Zero_check(int g)
{
    bool t = 0;
    while (1)
    {
        if (g < 10)
        {
            break;
        }
        if (g % 10 == 0)
        {
            t = 1;
            break;
        }
        else
        {
            g /= 10;
        }
        
    }
    return t;
}
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector <long long> v;
vector <bool> b;
int main()
{
    bool a = 1;
    int tt = 0;
    string t;
    cin >> t;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '-' || t[i] == '+')
        {
            b.push_back(a);
            v.push_back(tt);
            tt = 0;
            a = (!(t[i] == '-'));
        }
        else
        {
            tt = tt * 10 + (t[i] - '0');
        }
    }
    b.push_back(a);
    v.push_back(tt);
    long long minn = 0;
    for (int i = 0; i < v.size(); i++)
    {
        minn += (b[i] ? 1 : -1) * (v[i]);
    }
    long long sum = 0;
    a = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (b[i] == 0)
        {
            a = 1;
        }
        if (a == 1)
        {
            sum += min(1* (v[i]), -1 * (v[i]));
           

        }
        else
        {

            sum += (b[i] ? 1 : -1) * (v[i]);
        }

        



    }
    cout << sum;
}
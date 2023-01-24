#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    string s12;
    string s0;
    cin >> s12;

    cin >> s0;

    int h1 = (s12[0] - '0') * 10 + (s12[1] - '0');
    int m1 = (s12[3] - '0') * 10 + (s12[4] - '0');
    int s1 = (s12[6] - '0') * 10 + (s12[7] - '0');
    int h2 = (s0[0] - '0') * 10 + (s0[1] - '0');
    int m2 = (s0[3] - '0') * 10 + (s0[4] - '0');
    int s2 = (s0[6] - '0') * 10 + (s0[7] - '0');
    int h = 0;
    int m = 0;
    int s = 0;
    if (s2 >= s1)
    {
        s = s2 - s1;
    }
    else
    {
        s = 60 - s1 + s2;
        m1++;
    }

    if (m2 >= m1)
    {
        m = m2 - m1;
    }
    else
    {
        m = 60 - m1 + m2;
        h1++;
    }

    if (h2 >= h1)
    {
        h = h2 - h1;
    }
    else
    {
        h = 24 - h1 + h2;
    }

    if (h + m + s==0)
    {
        cout << "24:00:00";
    }
    else
    {
        if (h < 10)
        {
            cout << "0" << h;
        }
        else
        {
            cout << h;
        }
        if (m < 10)
        {
            cout << ":" << "0" << m;
        }
        else
        {
            cout << ":" << m;
        }
        if (s < 10)
        {
            cout << ":" << "0" << s;
        }
        else
        {
            cout << ":" << s;
        }
    }
    

}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c, d=100, e = 0;
    vector <int> s;
    cin >> a;
    cin >> c;


    for (int i = 0; i < a - 1; i++)
    {
        cin >> b;
        s.push_back(b);
    }
    int f = 0;
    int count = 0;

    if (a!=1)
    {
        while (1)
        {
             f = 0;
             count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] > count)
                {
                    f = i;
                    count = s[i];
                }


            }
            if (c > count)
            {
                cout << e;
                break;
            }
            e++;
            c++;
            s[f] -= 1;
            count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] > count)
                {
                    f = i;
                    count = s[i];
                }


            }

            if (c > count)
            {
                cout << e;
                break;
            }




            
            

        }

    }
    else
    {
        cout << 0;
    }





}
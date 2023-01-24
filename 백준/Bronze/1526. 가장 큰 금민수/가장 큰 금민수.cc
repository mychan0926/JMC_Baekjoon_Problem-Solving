#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, count=0;
    string s;
    cin >> a;
    for (int i = a; i != 0; i--)
    {
        s = to_string(i);
        count = 0;
        for (int j=0;j<s.size();j++)
        {
            
            if (s[j] == '4' || s[j] == '7')
            {

            }
            else
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << s;
            return 0;
        }
    }
}
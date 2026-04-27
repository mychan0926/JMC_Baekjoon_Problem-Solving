#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int stk = 0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='(')
            stk++;
        else
        {
            if (!stk)
                return false;
            stk--;
        }
    }
    return stk==0;
}
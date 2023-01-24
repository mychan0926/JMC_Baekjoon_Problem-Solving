#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[8],b;
   
    for (int i=0;i<8;i++)
    {
        cin >> a[i];
    }
    int counta = 0;
    int countb = 0;
    for (int i = 0; i < 8; i++)
    {
        if (a[i] == i + 1)
        {
            counta += 1;
        }
        else if(a[i] == 8-i)
        {
            countb += 1;
        }
    }
    if (counta == 8)
    {
        cout << "ascending";;
    }
    else if (countb == 8)
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }

}
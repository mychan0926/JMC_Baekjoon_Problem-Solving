#include <iostream>
using namespace std;
int main()
{
    int s[30]={0};
    int a;
    for (int i=0;i<28;i++)
    {
        cin >> a;
        s[a-1]=1;
    }
    for (int i=0;i<30;i++)
    {
        if(s[i]==0)
        {
            cout <<i+1<<"\n";
        }
    }
}
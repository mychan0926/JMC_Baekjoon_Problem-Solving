#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<abs((n-1)-i);j++)
        {
            cout<<" ";
        }
         for(int j=0;j<(n-abs((n-1)-i))*2-1;j++)
        {
            cout<<"*";
        }
       cout<<"\n";
    }
}
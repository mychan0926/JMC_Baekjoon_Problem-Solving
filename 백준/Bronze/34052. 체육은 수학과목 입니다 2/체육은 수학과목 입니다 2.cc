#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
    int a,b=0;
    for(int i=0;i<4;i++)
    {
        cin>>a;
        b+=a;
    }
    if(b+300>1800)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
}
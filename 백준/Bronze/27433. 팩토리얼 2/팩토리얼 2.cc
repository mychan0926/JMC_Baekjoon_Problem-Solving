#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll a;
    cin>>a;
    ll g=1;
    for(int i=1;i<=a;i++)
    {
        g*=i;
    }
    cout<<g;
}


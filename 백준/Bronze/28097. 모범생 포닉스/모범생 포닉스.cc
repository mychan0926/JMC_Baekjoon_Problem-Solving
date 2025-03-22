#include <iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        c+=b;
            
    }
    c+=8*a-8;
    cout<<c/24<<" "<<c%24;
}
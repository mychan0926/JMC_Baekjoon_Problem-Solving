#include <iostream>
using namespace std;

int main()
    {
    int a,b,c,n,m=0;
    
    cin>>n;
    cin>>a>>b>>c;
    if(a-n>=0)
        {
        m+=n;
        }
    else
    {
        m+=a;
    }
    if(b-n>=0)

        {

        m+=n;

        }

    else

    {

        m+=b;

    }
    if(c-n>=0)
        {
        m+=n;
        }
    else
    {
        m+=c;
    }
    cout<<m;
    }
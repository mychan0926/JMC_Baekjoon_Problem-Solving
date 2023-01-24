#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    
    int a,b,c,d,e;
    for(int i=0;i<3;i++)
    {
        cin >> a>>b>>c>>d;
        e=a+b+c+d;
        if(e==0)
        {
            cout<<"D\n";
        }
        if(e==1)
        {
            cout<<"C\n";
        }
        if(e==2)
        {
            cout<<"B\n";
        }
        if(e==3)
        {
            cout<<"A\n";
        }
        if(e==4)
        {
            cout<<"E\n";
        }
    }
    
    
    
}
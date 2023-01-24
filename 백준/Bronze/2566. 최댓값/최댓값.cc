#include <iostream>

using namespace std;

int main()
{
    int a,b=-1,x,y;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            cin>>a;
            if(a>b)
            {
                b=a;
                x=j;
                y=i;
            }
            
        }
    }
    cout<<b<<"\n"<<y<<" "<<x;
    
}
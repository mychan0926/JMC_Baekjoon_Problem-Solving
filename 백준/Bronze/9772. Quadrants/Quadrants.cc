#include <iostream>
using namespace std;
int main()
{
    double a,b;
    while(1)
    {
        cin>>a>>b;
        if(0==b&&a==0)
        {
            cout<<"AXIS\n";
            break;
        }
        
        if(a*b==0)
        {
            cout<<"AXIS\n";
        }
        else
        {
            if(a*b<0)
            {
                if(a<0)
                {
                    cout<<"Q2";
                }
                else
                {
                    cout<<"Q4";
                }
            }
            else
            {
                if(a>0)
                {
                    cout<<"Q1";
                }
                else
                {
                    cout<<"Q3";
                }
            }
            cout<<"\n";
        }
    }
}
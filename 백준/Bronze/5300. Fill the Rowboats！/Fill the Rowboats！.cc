#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    for(int i=1;i<a+1;i++)
    {
        cout<<i<<" ";
        if(i%6==0||i==a)
        {
            cout<<"Go! ";
        }
    }
}
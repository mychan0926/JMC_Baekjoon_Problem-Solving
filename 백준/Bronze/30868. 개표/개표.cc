#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    for(int j=0;j<a;j++)
    {
        cin>>b;
     for(int i=0;i<b/5;i++)
    {
        cout<<"++++ ";
    }
    for(int i=0;i<b%5;i++)
    {
        cout<<"|";
    }
        cout<<"\n";
    }

}
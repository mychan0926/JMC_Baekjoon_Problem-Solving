#include <iostream>
using namespace std;
int main()
{
    int a;
    string t;

    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>t;
            char b=' ';
        for(int j=0;j<t.size();j++)
        {
            if(t[j]!=b)
            {
                b=t[j];
                cout<<t[j];
            }
        }
        cout<<"\n";
    }
}
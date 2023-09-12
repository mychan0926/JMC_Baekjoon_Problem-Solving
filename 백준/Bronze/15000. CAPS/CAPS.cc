#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t;
    cin>>t;
    for(int i=0;i<t.size();i++)
    {
        cout<<char(int(t[i])+'A'-'a');
    }
}
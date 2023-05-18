#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t;
    cin>> t;
    int g=0;
    int sizet=t.size();
    for(int i=0;i<sizet/2;i++ )
    {
        if(t[i]!=t[sizet-1-i])
        {
           g=1; 
        }
        
    }
    cout<<(g^1);


}
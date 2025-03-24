#include <iostream>
using namespace std;

int main()
{
    string a;
    while(!(cin.eof()))
    {
        getline(cin,a);
        cout<<a<<"\n";
    }
}
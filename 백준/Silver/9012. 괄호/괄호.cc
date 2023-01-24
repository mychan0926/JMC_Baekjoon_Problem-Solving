#include <iostream>
#include <string>

using namespace std;
int main()
{
    int N,M;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        int tmpint=0;
        int kick=0;
        string tmp;
        cin>>tmp;
        for(int j=0;j<tmp.size();j++)
        {
            if(tmp[j]=='(')
            {
                tmpint++;
            }
            else
            {
                if(tmpint==0)
                {
                    cout<<"NO\n";
                    kick=1;
                    break;
                }
                else
                {
                    tmpint--;
                }
            }
            
        }
        if(kick==0)
        {
            if(tmpint==0)
        {
            cout<<"YES\n";
        }
        else
        {
           cout<<"NO\n"; 
        }
        }
        
    }
    
}
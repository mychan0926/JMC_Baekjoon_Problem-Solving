#include <iostream>
#include <vector>
using namespace std;

int main()
    {
    int a,b,c,n,m=0;
    vector<int>s(300000,0);
    
    cin>>n;
    for (int i=0;i<n;i++)
        {
        int tmp;
        cin>>tmp;
        cin>>c;
        if(c==0)
            {
            if(s[tmp]==0)
                {
                m++;
                }
            else
                {
                s[tmp]=0;
                }
            }
        else
            {
            if(s[tmp]==1)

                {

                m++;

                }

            else

                {

                s[tmp]=1;

                }
            }
        
        }
    
    for(int i=0;i<s.size();i++)
        {
        if(s[i]==1)
            {
            m++;
            }
        }
    cout<<m;
    }
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    long long m,n,b;
    cin>>n>>m>>b;
    vector <vector <long long>> c(n,vector <long long>(m,0));
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<m;j++)
        {
            long long t=0;
            cin>>t;
            c[i][j]=t;
        }
    }
    long long min=m*n*512;
    long long min_block=0;
    for(long long l=0;l<257;l++)
    {
        long long sum=0;
        long long block=b;
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                if(l-c[i][j]>=0)
                {
                    sum+=l-c[i][j];
                    block-=l-c[i][j];
                }
                else
                {
                    sum+=-1*(l-c[i][j])*2;
                    block-=l-c[i][j];
                }
                
            }
        }
        if(block>=0)
        {
            if(min>=sum)
            {
                min=sum;
                min_block=l;
            }
        }
    }
    cout<<min<<" "<<min_block;
    
    
}
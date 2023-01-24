#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a,b;
    vector <vector<int>> c;
    for(int i=0;i<100;i++)
    {
        vector<int>v;
        for(int j=0;j<100;j++)
        {
            v.push_back(0);
        }
        c.push_back(v);
    }
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x,y;
        cin>>x>>y;
        
        for(int i=y-1;i<y+9;i++)
        {
            for(int j=x-1;j<x+9;j++)
        {
            if(i<100&&j<100)
            {
                c[i][j]=1;
            }
        }
        }
        
    }
    int count=0;
     for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
             if(c[i][j]==1)
            {
                count++;
            }
        }
        
    }
    cout<<count;
}
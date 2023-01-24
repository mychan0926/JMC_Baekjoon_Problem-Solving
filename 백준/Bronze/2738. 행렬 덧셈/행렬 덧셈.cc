#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a,b;
    vector <vector<int>> c,d;
    cin >> a>>b;
    for(int i=0; i<a;i++)
    {
        vector<int> e;
        
        for(int j=0; j<b;j++)
        {
            
            
            int tmp;
            cin>>tmp;
            e.push_back(tmp);
        }
        c.push_back(e);
    }
    for(int i=0; i<a;i++)
    {
        vector<int> e;
        
        for(int j=0; j<b;j++)
        {
            
            
            int tmp;
            cin>>tmp;
            e.push_back(tmp);
        }
        d.push_back(e);
    }
     for(int i=0; i<a;i++)
    {
        for(int j=0; j<b;j++)
        {
            c[i][j]+=d[i][j];
            cout<<c[i][j]<<" ";
            
        }
         cout<<"\n";
    }
    
    
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <pair<int,int>> v; 
vector <pair<int,int>> vv; 

int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int t;
        cin>>t;
        v.push_back({t,i});
    }
    vv=v;
    sort(v.begin(),v.end());
    
    for(int i=0;i<a;i++)
    {
        for (int j =0;j<a;j++)
        {       
            if (v[j].second == i)
        {
            cout<<j<<" ";
        }
            
        }
 
        
    }
    
}
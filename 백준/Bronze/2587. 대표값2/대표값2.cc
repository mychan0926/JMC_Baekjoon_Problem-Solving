#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int sum=0,a,b;
    vector<int>c;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        c.push_back(a);
        sum+=a;
    }
    cout<<sum/5<<"\n";
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            int tmp;
            if(c[j]>c[j+1])
            {
                tmp=c[j];
                c[j]=c[j+1];
                c[j+1]=tmp;
            }
        }
    }
    cout<<c[2];
}
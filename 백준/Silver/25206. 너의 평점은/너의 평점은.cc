#include <iostream>

using namespace std;

int main()
{
    float sum=0;
    int g=0;
    string t;
    float num=0;
    for(int i=0;i<20;i++)
    {
        string a;
        cin>>a>>num>>t;
        if(t=="A+")
        {
            sum+=4.5*num;
            g+=num;
        }
        else if(t=="A0")
        {
            sum+=4.0*num;
             g+=num;
        }
        else if(t=="B+")
        {
            sum+=3.5*num;
            g+=num;
        }
        else if(t=="B0")
        {
            sum+=3.0*num;
            g+=num;
        }
        else if(t=="C+")
        {
            sum+=2.5*num;
            g+=num;
        }
        else if(t=="C0")
        {
            sum+=2.0*num;
            g+=num;
        }
        else if(t=="D+")
        {
            sum+=1.5*num;
            g+=num;
        }
        else if(t=="D0")
        {
            sum+=1.0*num;
            g+=num;
        }
        else if (t=="F")
        {
            g+=num;
        }
        
    }
    if(g!=0)
    {
        cout<<sum/g;
    }
    else
    {
        cout<<0.0f;
    }
    

}
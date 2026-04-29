#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int L, int W, vector<int> TW) {
    int a = 0;
    int CW = 0;
    int time = 0;
    queue <pair<int,int>> q;
    for(int i=0;i<TW.size();i++)
    {
        while(1)
        {
            time++;
            pair<int,int> t = q.front();
            if (t.first==time)
            {
                q.pop();
                CW-=t.second;
                cout<<time<<" ";
            }
            if(CW+TW[i]<=W&&q.size()<L)
            {
                CW+=TW[i];
                q.push({time+L,TW[i]});
                break;
            }
            
        }
    }
    while(!q.empty())
    {
        pair<int,int> t = q.front();
        q.pop();
        time = t.first;
    }
    return time;
}
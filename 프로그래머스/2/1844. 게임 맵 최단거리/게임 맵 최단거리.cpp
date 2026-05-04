#include <vector>
#include <queue>
#include <iostream>
using namespace std;
vector<vector<int>> dist;
queue <pair<int,int>> q;
int n,m;
bool check_range(int y, int x)
{
    if(y<0||y>=n||x<0||x>=m)
    {
        return 0;
    }
    return 1;
}

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    n = maps.size();
    m = maps[0].size();
    dist = vector<vector<int>>(n,vector<int>(m,0));
    q.push({0,0});
    dist[0][0]=1;
    while(!q.empty())
    {
        int t1 = q.front().first;
        int t2 = q.front().second;
        q.pop();
        int y1[] = {1,0,-1,0};
        int x1[] = {0,1,0,-1};
        for(int i=0;i<4;i++)
        {
            int ty = t1+y1[i];
            int tx = t2+x1[i];
            if(check_range(ty,tx))
            {
                if (maps[ty][tx]==1&&dist[ty][tx]==0)
                {
                    dist[ty][tx] = dist[t1][t2] + 1;
                    q.push({ty,tx});
                }
            }
        }
        
    }
    if (dist[n-1][m-1]==0)
        return -1;
    else
        return dist[n-1][m-1];
}
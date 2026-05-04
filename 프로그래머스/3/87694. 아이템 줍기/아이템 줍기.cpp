#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<vector<int>> m;
queue<pair<int,int>> q;
int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    int answer = 0;
    m.resize(110,vector<int>(110,0));
    for (int i=0;i<rectangle.size();i++)
    {
        vector <int> tr = rectangle[i];
        for (int j=0;j<4;j++)
            tr[j]*=2;
        
        for (int y=tr[1];y<=tr[3];y++)
        {
            for (int x=tr[0];x<=tr[2];x++)
            {
                if(x==tr[0]||x==tr[2]||y==tr[1]||y==tr[3])
                {
                    if (m[y][x]!=-1)
                        m[y][x]=-2;
                }
                else
                {
                    m[y][x]=-1;
                }
            }
        }
    }
    characterY*=2;characterX*=2;itemX*=2;itemY*=2;
    m[characterY][characterX]=0;
    q.push({characterY,characterX});
    while(!q.empty())
    {
        int ty = q.front().first;
        int tx = q.front().second;
        q.pop();
        int y1[] = {1,0,-1,0};
        int x1[] = {0,1,0,-1};
        for(int i=0;i<4;i++)
        {
            if (m[ty+y1[i]][tx+x1[i]]==-2)
            {
                m[ty+y1[i]][tx+x1[i]]=m[ty][tx]+1;
                if (ty+y1[i]==itemY&&tx+x1[i]==itemX)
                {
                    return m[ty+y1[i]][tx+x1[i]]/2;
                }
                q.push({ty+y1[i],tx+x1[i]});
            }
        }
    }
    
    for(int i=0;i<m.size();i++)
    {
        for (int j=0;j<m.size();j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    return answer;
}
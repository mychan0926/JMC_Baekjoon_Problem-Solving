#include <string>
#include <vector>

using namespace std;

vector<vector<int>> v;
int counting=0;
int answer = -1;
vector <int> visit;
void func(int count,int state)
{
    if (counting==v.size())
    {
        if(answer<count)
        {
            answer = count;
        }
    }
    else
    {
        for(int i=0;i<v.size();i++)
        {
            if (visit[i]!=1)
            {
                visit[i]=1;
                counting++;
                if(v[i][0]<=state)
                {
                    func(count+1,state-v[i][1]);
                }
                else
                {
                    func(count,state);
                }
                visit[i]=0;
                counting--;
            }
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    visit=vector<int>(k,0);
    v=dungeons;
    func(0,k);
    return answer;
}
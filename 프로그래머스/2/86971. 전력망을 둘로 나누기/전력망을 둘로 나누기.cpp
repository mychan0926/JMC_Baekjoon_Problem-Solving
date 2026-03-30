#include <string>
#include <vector>

using namespace std;
vector<vector<int>> grid;
int answer = 1000;
int node;
int result=0;
vector <int> visit;
void counting(int n)
{
    if(visit[n]==1)
    {
        return ;
    }
    else
    {
        result++;
        visit[n]=1;
        for (int i=1;i<node+1;i++)
        {
            if(grid[n][i]==1)
            {
                counting(i);
            }
        }
    }
}

int solution(int n, vector<vector<int>> wires) {
    node = n;
    grid= vector <vector <int>>(n+1,vector<int>(n+1,0));
    
    for (int i=0;i<wires.size();i++)
    {
        grid[wires[i][0]][wires[i][1]]=1;
        grid[wires[i][1]][wires[i][0]]=1;
    }
    for (int i=0;i<wires.size();i++)
    {
        visit=vector<int>(n+1,0);
        result=0;
        grid[wires[i][0]][wires[i][1]]=0;
        grid[wires[i][1]][wires[i][0]]=0;
        counting(1);
        if (answer > abs(result-(node-result)))
        {
            answer = abs(result-(node-result));
        }
        grid[wires[i][0]][wires[i][1]]=1;
        grid[wires[i][1]][wires[i][0]]=1;
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector <vector <int>> v;
vector <int> check_list;
vector <int> costs_table;
bool compare(vector<int> a,vector<int> b)
{
    return a[2] < b[2];
}
int check_loop(int a)
{
    if (check_list[a] == a)
    {
        return a;
    }
    else
    {
        return check_loop(check_list[a]);
    }
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    v.resize(n,vector<int>(n,0));
    check_list.resize(n,-1);
    costs_table.resize(costs.size(),0);
    for (int i=0;i<check_list.size();i++)
    {
        check_list[i]=i;
    }
    
    for (int i=0;i<costs.size();i++)
    {
        v[costs[i][0]][costs[i][1]] = costs[i][2];
        v[costs[i][1]][costs[i][0]] = costs[i][2];
    }
    sort(costs.begin(),costs.end(),compare);
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<costs.size();j++)
        {
            
            if(costs_table[j]==0)
            {
                if(check_loop(costs[j][0])!=check_loop(costs[j][1]))
                {
                    check_list[check_loop(costs[j][0])] = check_loop(costs[j][1]);
                    answer+=costs[j][2];
                    costs_table[j]=1;
                    break;
                }
            }
        }
    }
    return answer;
}
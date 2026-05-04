#include <string>
#include <vector>

using namespace std;
int N;
vector <vector<int>> C;
vector<int> check;
bool bfs(int idx)
{
    if(check[idx]==1)
    {
        return false;
    }
    else
    {
        check[idx] = 1;
        vector<int> tmp = C[idx];
        for(int i=0;i<tmp.size();i++)
        {
            if (tmp[i]==1)
            {
                bfs(i);
            }
        }
        return true;
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    N = n;
    C = computers;
    check.resize(n,0);
    for (int i=0;i<n;i++)
    {
        if(bfs(i)==true)
        {
            answer++;
        }
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector <int> num;
int target_num;
int counting=0;
void dfs(int count, int idx)
{
    if (count == num.size())
    {
        if(idx==target_num)
        {
            counting++;
        }
        return;
    }
    else
    {
        
        dfs(count+1,idx+num[count]);
        dfs(count+1,idx-num[count]);
    }
}
int solution(vector<int> numbers, int target) {
    num = numbers;
    target_num = target;
    dfs(0,0);
    return counting;
}
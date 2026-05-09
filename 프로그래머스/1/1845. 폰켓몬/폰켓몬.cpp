#include <vector>
#include <map>
using namespace std;
map <int,int> m;
int solution(vector<int> nums)
{
    for (int i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
    }
    return min(nums.size()/2,m.size());
}
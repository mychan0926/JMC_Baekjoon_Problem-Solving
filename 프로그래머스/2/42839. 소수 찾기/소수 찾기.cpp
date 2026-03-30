#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int string_size;
string s;
vector <int> v(10000000,1);
vector <int> visit;
vector <int> prime_num;
int counting = 0;
vector<int> test;
void dfs(int num,string a)
{
    if(num==string_size)
    {
        if(a!="")
        {
            if (v[stoi(a)]==1)
            {
                counting+=1;
                v[stoi(a)]=2;
            }
        }
        
    }
    else
    {
        for (int i=0;i<string_size;i++)
        {
            if (visit[i]==1)
            {
                continue;
            }
            visit[i] =1;
            dfs(num+1,a+s[i]);
            visit[i] =0;
        }
        dfs(num+1,a);
    }
    return;
}

int solution(string numbers) {
    
    string_size=numbers.size();
    s=numbers;
    visit=vector<int>(string_size,0);
    v[0]=2;v[1]=2;
    for (int i=2;i<sqrt(10000000)+1;i++) //에라토스테네스의 체
    {
        int t=i;
        if(v[t]==2)
        {
            continue;
        
        }
        while (t+i<10000000)
        {
            t+=i;
            if(v[t]==1)
            {
                v[t]=2;
            }
        }
    }
    dfs(0,"");
    return counting;
}
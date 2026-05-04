#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector <int> check;
vector<vector<int>> v;
int b,t;
int min_count=10000;
void dfs(int idx,int num)
{
    if (idx==t)
    {
        if(min_count>num)
        {
            min_count = num;
        }
        return;
    }
    for(int i=0;i<check.size()-1;i++)
    {
        if (v[idx][i] == 1&&check[i]==0)
        {
            check[i]=1;
            dfs(i,num+1);
            check[i]=0;
        }
    }
}
int diff_count(string a, string b)
{
    int count = 0;
    for (int i=0;i<a.size();i++)
    {
        if(a[i] != b[i])
        {
            count++;
        }
    }
    return count;
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    int n =words.size();
    b= 0;
    t= find(words.begin(),words.end(),target)-words.begin();
    if (t==n)
    {
        return 0;
    }
    v = vector<vector<int>>(n+1,vector<int>(n+1,0));
    check.resize(n+1,0);
    words.push_back(begin);
    for(int i=0;i<words.size();i++)
    {
        for(int j=0;j<words.size();j++)
        {
            if (diff_count(words[i],words[j])==1)
            {
                v[i][j]=1;
            }
        }
    }
    dfs(n,0);
    return min_count;
}
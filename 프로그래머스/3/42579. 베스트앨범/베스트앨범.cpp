#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
map <string,vector<pair<int,int>>> m;
map <string,int> counting;
vector<int> solution(vector<string> g, vector<int> p) 
{
    vector<int> answer;
    int size = g.size();
    for (int i=0;i<size;i++)
    {
        counting[g[i]]+=p[i];
        m[g[i]].push_back({p[i],-i}); 
    }
    map <int,string> t;
    for (auto i=counting.begin();i!=counting.end();i++)
    {
        t[-(*i).second]=(*i).first;
    }
    
    for (auto i=t.begin();i!=t.end();i++)
    {
        string genre = (*i).second;
        sort(m[genre].begin(),m[genre].end());
        reverse(m[genre].begin(),m[genre].end());
        
        answer.push_back(-m[genre][0].second);
        if (m[genre].size()>1)
            answer.push_back(-m[genre][1].second);
    }
    return answer;
}
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map <string,int> m;
int solution(vector<vector<string>> c) {
    int a=1;
    for (int i=0;i<c.size();i++)
    {
        vector <string> t=c[i];
        m[t[1]]++;
    }
    for (auto i=m.begin();i!=m.end();i++)
        a*=i->second+1;
    return a-1;
}
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map <string,int> m;
bool solution(vector<string> p) {
    for (int i=0;i<p.size();i++)
        m[p[i]] = 1;

    for (int i=0;i<p.size();i++)
    {
        string t = "";
        for (int j=0;j<p[i].size()-1;j++)
        {
            t+=p[i][j];
            if (m[t])
                return false;
        }
        m[p[i]] = 1;
    }
    return true;
}
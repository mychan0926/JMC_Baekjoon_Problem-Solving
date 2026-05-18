#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int solution(vector<int> c) 
{
    int maxx = 0;
    sort(c.begin(),c.end());
    int state = -1;
    for (int i=0;i<c.size()/2+1;i++)
    {
        if (state!=c[i])
        {
            if (i<=c[i])
                maxx=max(min((int)c.size()-i,c[i]),maxx);
            state = c[i];
        }
    }
    return maxx;
}
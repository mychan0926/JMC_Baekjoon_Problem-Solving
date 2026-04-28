#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(),0);
    stack <pair<int,int>> s;
    for (int i=0;i<prices.size();i++)
    {
        pair<int,int> ts;
        while(!s.empty())
        {
            ts = s.top();
            if(ts.first>prices[i])
            {
                s.pop();
                int t= i-ts.second;
                answer[ts.second]=t;
            }
            else 
                break;
            
        }
        s.push({prices[i],i});
    }
        while(!s.empty())
        {
            pair<int,int> ts = s.top();
            int t= prices.size()-ts.second;
            answer[ts.second] = t-1;
            s.pop();
        }
    return answer;
}
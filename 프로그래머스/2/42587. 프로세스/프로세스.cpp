#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) 
{
    priority_queue <int> pq;
    queue <pair<int,int>> q;
    int answer = 0;
    for(int i=0;i<priorities.size();i++)
    {
        pq.push(priorities[i]);
        q.push({priorities[i],i});
        
    }
    while(1)
    {
        int t1 = pq.top();
        pair<int,int> t2 = q.front();
        q.pop();
        if (t1 == t2.first)
        {
            pq.pop();
            answer++;
            if (t2.second==location)
            {
                break;
            }
        }
        else
        {
            q.push(t2);
        }
        
    }
    
    return answer;
}
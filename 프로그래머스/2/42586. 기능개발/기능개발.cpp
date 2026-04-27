#include <string>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    vector<int> answer;
    int time = 0;
    queue <int> p;
    queue <int> s;
    for (int i=0;i<speeds.size();i++)
    {
        p.push(progresses[i]); //큐에 순서대로 집어넣기
        s.push(speeds[i]);
    }
    int counting=0; //지난 날짜
    int check = 0;
    while(!p.empty())
    {
        if (p.front()+s.front()*counting>=100) //작업 진행도 확인. 초과했으면
        {
            p.pop(); //지우기
            s.pop();
            check++;
        }
        else
        {
            if(check!=0) //이전에 연속으로 배포되었으면
            {
                answer.push_back(check);
                check=0;
            }
            counting++;
        }
    }
    if (check!=0)
    {
        answer.push_back(check);
    }
    return answer;
}
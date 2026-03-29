#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int people [4][10] = {{},{1, 2, 3, 4, 5},{2, 1, 2, 3, 2, 4, 2, 5},{3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    int people_size [4] = {0,5,8,10};
    int max =-1;
    for (int i=1;i<4;i++)
    {
        int sum=0;
        for (int j=0;j<answers.size();j++)
        {
            if(answers[j]==people[i][j%people_size[i]])
            {
                sum+=1;
            }
        }
        if (max<sum)
        {
            answer = vector<int>();
            answer.push_back(i);
            max=sum;
        }
        else if (max==sum)
        {
            answer.push_back(i);
        }
    }
    
    return answer;
}
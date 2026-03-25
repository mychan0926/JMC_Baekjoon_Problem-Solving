#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string number, int k) {
    string answer = "";
    int select = number.size()-k;
    int limit=-1;
    for (int i=0;i<select;i++)
    {
        char max=-1;
        int index=-1;
        for(int j=limit+1;j<number.size()-select+i+1;j++)
        {
            if(number[j]>max)
            {
                max=number[j];
                index=j;
            }
        }
        limit=index;
        answer.push_back(max);
    }
    return answer;
}
#include <string>
#include <vector>
#include <math.h>


using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for (int i=3;i<sum;i++)
    {
        if(sum%i==0)
        {
            if(2*(i+sum/i)-4==brown)
            {
                answer={sum/i,i};
                break;
            }
        }
    }
    

    
    return answer;
}
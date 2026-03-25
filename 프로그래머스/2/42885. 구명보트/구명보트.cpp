#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(),people.end());
    int a = 0;
    int b = people.size()-1;
    while(1)
    {
        if(people[b]+people[a]<=limit)
        {
            a++;
        }
        b--;
        answer++;
        if(a>=b)
        {
            break;
        }
    }
    
    return answer+(a==b);
    
}
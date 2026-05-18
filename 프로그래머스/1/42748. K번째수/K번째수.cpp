#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> a, vector<vector<int>> c) {
    vector<int> answer;
    for (int i=0;i<c.size();i++)
    {
        vector<int> tc=c[i],tv; //tc : 명령어, tv: 슬라이싱을 위한 임시 백터
        for(int j=tc[0]-1;j<tc[1];j++) //1부터 시작하기에 1을 빼고 범위 범위 자르기.
            tv.push_back(a[j]);
        sort(tv.begin(),tv.end()); //자른 배열 정렬
        answer.push_back(tv[tc[2]-1]); //인덱스 접근으로 답 구하기
    }
    return answer;
}
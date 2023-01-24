#include <algorithm>
#include <queue>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	priority_queue<pair<int, int>> index; //우선순위
	priority_queue<pair<pair<int, int>, int>> sum; //값
	int count = 0;
	int people;
	int calculate;
	cin >> people;
	cin >> calculate;
	int id;
	long long int end = 0;
	int m;
	int calculate_num;
	for (int i = 0; i < people; i++)
	{
		count++;

		cin >> id;
		cin >> m;
		if (index.size() == calculate)
		{
			
			sum.push(make_pair(make_pair((index.top().first-m),-index.top().second),id ));
			index.push(make_pair((index.top().first - m), (index.top().second)));
			index.pop();

		} //index에 계산기 수 대로 가중치 넣기. (가중치,계산대(카운트) 순으로)
		//sum은 본인의 분을 넣기 가중치 저장. (가중치,id)
		// //sum은 index 처리전, 가장 작은 가중치 넣어줌(가중치,계산대,id)
		//그후 넘으면, index는 똑같이 가장 작은 계산대 찾은후, (가중치+m,예전 계산대로 저장)
		
		else
		{
			index.push(make_pair(-m, -count));
			sum.push(make_pair(make_pair(-m,count), id)); //계산대 정보 저장
		}
	}
	for (int i = 0; i < people; i++)
	{
		end += (long long int)(i + 1) * (long long int)sum.top().second;
		sum.pop();
	}
	cout << end;
}
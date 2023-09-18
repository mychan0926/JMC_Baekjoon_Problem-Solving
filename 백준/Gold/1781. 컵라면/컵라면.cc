#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <queue>


using namespace std;
struct compare {
    bool operator()(pair<long long, long long> a, pair<long long, long long> b) {
        if (a.first < b.first)
        {
            return 1;
        }
        else if (a.first > b.first)
        {
            return 0;
        }
        else
        {
            return a.second < b.second;
        }
        
    }
};

priority_queue <pair<long long,long long>,vector<pair<long long, long long>>, compare> p;
priority_queue <long long> pq;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b, c;
        cin >> b >> c;
        p.push({b*-1,c});

    }
    long long g = 0;
    long long sum = 0;
    long long gh = 0;
    while (p.size())
    {
        long long t1=  p.top().first*-1;
        long long t2 = p.top().second;
        p.pop();

       

        if (g<t1)
        {
            gh = t1;
            pq.push(t2*-1);
            sum += t2;
            g++;
        }
        else
        {
            if (pq.empty() != 1)
            {
                if (pq.top() * -1 < t2)
                {
                    sum -= pq.top() * -1;
                    pq.pop();
                    pq.push(t2 * -1);
                    sum += t2;
                    continue;
                }

            }
        }
    }
    cout << sum;

}
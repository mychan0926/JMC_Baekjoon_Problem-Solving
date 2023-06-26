#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N, M,SUM=0,counting=0;
    cin >> N >> M;
    vector <pair<int, pair<int, int>>> s;
    vector<int> cycle(N + 1, 0);
    for (int i = 0; i < N + 1; i++)
        cycle[i] = i;
    for (int i = 0; i < M; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            s.push_back({ c,{b,a} });
        }
        else
        {
            s.push_back({ c,{a,b} });
        }
    }
    sort(s.begin(),s.end());
    
    for (int i=0;i<M; i++)
    {
        int tmp1 = s[i].second.first;
        int tmp2 = s[i].second.second;
        int c= s[i].first;
        int g = 0, h = 0;
            while (1)
            {
                g++;
                if (cycle[tmp1] == tmp1)
                {
                    break;
                }
                else 
                {
                    tmp1=cycle[tmp1];
                }

            }

            while (1)
            {
                h++;
                if (cycle[tmp2] == tmp2)
                {
                    break;
                }
                else
                {
                    tmp2 = cycle[tmp2];
                }

            }

            if (tmp1 != tmp2)
            {
                if (g > h)
                {
                    cycle[tmp2] = tmp1;
                    counting++;
                    if (counting < N - 1)
                        SUM += c;
                    else
                        break;
                }
                else
                {
                    cycle[tmp1] = tmp2;
                    counting++;
                    if (counting < N - 1)
                        SUM += c;
                    else
                        break;
                }
                
            }
            
       
    }
    cout << SUM;
}
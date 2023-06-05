#include <string>
#include <vector>
#include <list>
#include <iostream>
using namespace std;



int solution(vector<int> ingredient) {
    list<int> l;
    l.push_back(0);
    int answer = 0;
    int call = 0;
    int checklist[4] = { 1,2,3,1 };
    for (int i = 0; i < ingredient.size(); i++)
    {
        l.push_back(ingredient[i]);
    }

    for (auto j = l.begin(); j != l.end(); j++)
    {
        if (call == 1)
        {
            j--;
        }
        call = 0;
        int i = 0;
        int check = 0;

        if (*j == 1)
        {
            for (auto k = j; k != l.end() && i != 4; k++, i++)
            {
                if (checklist[i] != *k)
                {
                    check = 1;
                    break;
                }


            }

            if (i != 4)
            {
                if (check != 1)
                {
                    return answer;
                }

            }
            else
            {
                int i = 0;
                auto p = j;
                auto kl = j;
                answer++;
                kl--;
                if (*kl != 0)
                {
                    kl--;
                }
                if (*kl != 0)
                {
                    kl--;
                }
                if (*kl != 0)
                {
                    kl--;
                }
                if (*kl != 0)
                {
                    kl--;
                }
                if (j != l.begin())
                {
                    j = kl;
                }
                l.erase(p++);
                l.erase(p++);
                l.erase(p++);
                l.erase(p);



            }
        }



    }
    return answer;
}
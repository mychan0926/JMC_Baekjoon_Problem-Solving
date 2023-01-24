#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int a, b, c, d, e, N, M;
    vector <int> s(20000005, 0);
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int j = 0;
        scanf("%d", &j);
        s[j + 10000000] += 1;
    }
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int j = 0;
        scanf("%d", &j);
        if (s[j + 10000000] != 0)
        {
            printf("%d ",s[j + 10000000]);
        }
        else
        {
            printf("0 ");
        }
    }

}
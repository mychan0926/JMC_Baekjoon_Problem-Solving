#include <iostream>
#include <set>
#include <vector>

using namespace std;
int s[22][22][22] = {0,};
int w(int a, int b, int c)
{
    int at, bt, ct,dt;
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }
    if (a > 20 || b > 20 || c > 20)
    {
        return w(20, 20, 20);
    }
    
    if (s[a][b][c] == 0)
    {

        


        


        if (a < b && b < c)
        {
            at = w(a, b, c - 1);
            bt = w(a, b - 1, c - 1);
            ct = w(a, b - 1, c);
            s[a][b][c - 1] = at;
            s[a][b-1][c - 1] = bt;
            s[a][b-1][c] = ct;
            return  at + bt - ct;
        }
        else
        {
            at = w(a - 1, b, c);
            bt = w(a - 1, b - 1, c);
            ct = w(a - 1, b, c - 1);
            dt = w(a - 1, b - 1, c - 1);
            s[a-1][b][c] = at;
            s[a-1][b - 1][c] = bt;
            s[a-1][b][c-1] = ct;
            s[a-1][b - 1][c-1] = dt;

            return at + bt + ct - dt;
        }

    }
    else
    {
        return s[a][b][c];
    }
}
int main()
{
    while (1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));

    }
}
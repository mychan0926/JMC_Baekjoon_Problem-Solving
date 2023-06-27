#include <iostream>
#include <vector>
#include <math.h>
#define ll long long
using namespace std;
vector <ll> v(60, 0);
vector <ll> s(60, 0);
ll check(ll a);
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll sum = 0;
    ll g = 1;
    for (ll i = 0; i < 60; i++)
    {
        v[i] = sum + 1;
        sum += g + sum;
        g *= 2;

    }
    ll i, j;
    cin >> i >> j;
    cout << check(j) - check(i - 1);
}



ll p(ll a)
{
    ll h = 1;
    for (ll i = 0; i < a; i++)
    {
        h *= 2;
    }
    return h;
}

ll loog(ll a)
{
    int i = 0;
    while (a/2!=0)
    {
        i++;
        a /= 2;
    }
    return i;
}
bool log_check(ll a)
{
    int i = 0;
    while (a / 2 != 0)
    {
        i++;
        a /= 2;
    }
    if (a != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

ll check(ll a)
{
    if (a == 0)
    {
        return 0;
    }
    ll A = loog(a);


    if (log_check(a))
    {
        return v[A];
    }
    else
    {
        return v[(ll)A] + a - p((ll)A) + check(a - p((ll)A));
    }
}
#include <iostream>
#include <queue>

using namespace std;
vector <vector <long long> > V;
vector <long long> check;
long long sorting(vector <long long>& t)
{
    long long l = 2147483647;
    long long num = 0;
    for (long long i = 1; i < t.size(); i++)
    {
        if (t[i] < l&&check[i]!=1)
        {
            l = t[i];
            num = i;
        }
    }
    return num;
}

int main()
{
    long long a, n, m;
    cin >> n >> m;
    V.resize(n + 1, vector <long long>(n + 1, 2147483647));
    for (long long i = 0; i < m; i++)
    {
        long long k, l, p;
        cin >> k >> l >> p;
        if (V[k][l] > p)
        {
            V[k][l] = p;
        }

    }
    long long root = 0;
    long long l, o;
    cin >> l;


    vector <long long> mainn(n + 1);
    check.resize(n + 1,0);
    check[l] = 1;
    for (long long i = 0; i < n; i++)
    {

        long long tmp = sorting(V[l]);
        for (long long j = 1; j < n + 1; j++)
        {
            if ((V[tmp][j] + V[l][tmp] < V[l][j]) && l != j)
            {
                V[l][j] = V[tmp][j] + V[l][tmp];
            }
        }
        check[tmp] = 1;

    }
    cin >> o;
    cout << V[l][o];



}
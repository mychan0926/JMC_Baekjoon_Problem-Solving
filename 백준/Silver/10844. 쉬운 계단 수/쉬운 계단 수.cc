#include <iostream>
#include <vector>


using namespace std;
vector <long long> v;
vector <vector <long long>> index;
long long p(long long i, long long c);
long long a = 0;
long long counting = 0;
int main()
{
    long long b, c, d;
    cin >> a;
    index.resize(10, vector <long long>(a+1, 0));
    for (long long i = 1; i < 10; i++)
    {
        counting += p(i, 1) % 1000000000;
    }
    cout << counting % 1000000000;
}


long long p(long long i, long long c)
{
    if (index[i][c] != 0)
    {
        return index[i][c] % 1000000000;

    }
    else
    {
        if (a == c)
        {
            return 1;
        }
        else
        {
            long long e=0, f=0;
            if (i != 0)
            {
                e = p(i - 1, c + 1) % 1000000000;
            }
            if (i != 9)
            {
                f = p(i + 1, c + 1) % 1000000000;
            }
            index[i][c] = e + f % 1000000000;
            return e + f % 1000000000;
        }
    }

}
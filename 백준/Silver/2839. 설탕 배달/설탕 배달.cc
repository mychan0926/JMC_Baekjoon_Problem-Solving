#include <iostream>

using namespace std;
int main()
{
    int a5;
    int a3;
    int k;
    int count = 0;
    int count2 = 0;
    cin >> k;
    if (k / 30 != 0)
    {

        count = 3 * ( (k / 15)-1);
        k %= 15;
        k += 15;
    }
    
    
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {

            if (k == i * 3 + j * 5 && !(i == 0 && j == 0))
            {
                if (count2 == 0)
                {
                    count2 = i + j;
                }
                else if (count2 > i + j)
                {
                    count2 = i + j;
                }
            }

        }

    }
    count += count2;
    if (count == 0 || (count2 == 0 && k != 0))
    {
        cout << -1;
    }
    else
    {
        cout << count;
    }

}
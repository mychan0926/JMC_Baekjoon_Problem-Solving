#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    
    int X, Y, A, full_check = 0;
    queue <pair<int,int>> position_check;
    cin >> X >> Y;

    vector <vector <int>> s(Y,vector <int> (X));
    for (int i = 0; i < Y; i++)
    {
        for (int j = 0; j < X; j++)
        {
            scanf("%d",&A);
            s[i][j] = A;
            if (A == 1)
            {
                full_check++;
                position_check.push(make_pair(i, j));
            }
            else if(A==-1)
            {
                full_check++;
            }
        }
    }
    int roop = 0;
    while (1)
    {
        int count = 0;
        int check = 0;
        int tem = position_check.size();
        for (int k = 0; k < tem; k++)
        {
            int i=0, j=0;
            i= position_check.front().first;
            j= position_check.front().second;
            if (s[i][j] == roop + 1)
            {
                if (i != 0)
                {
                    if (s[i - 1][j] == 0)
                    {
                        s[i - 1][j] = s[i][j] + 1;
                        position_check.push(make_pair(i - 1, j));
                        full_check++;
                        count++;
                    }
                }


                if (j != 0)
                {
                    if (s[i][j - 1] == 0)
                    {
                        s[i][j - 1] = s[i][j] + 1;

                        position_check.push(make_pair(i, j - 1));
                        full_check++;
                        count++;
                    }
                }
                if (i != Y - 1)
                {
                    if (s[i + 1][j] == 0)
                    {
                        s[i + 1][j] = s[i][j] + 1;
                        position_check.push(make_pair(i + 1, j));
                        full_check++;
                        count++;
                    }
                }
                if (j != X - 1)
                {
                    if (s[i][j + 1] == 0)
                    {
                        s[i][j + 1] = s[i][j] + 1;
                        position_check.push(make_pair(i, j + 1));
                        full_check++;
                        count++;
                    }

                }
            }
            position_check.pop();
        }
        
        if (count == 0)
        {
            if (full_check == X * Y)
            {
                cout << roop;

            }
            else
            {
                cout <<-1;
            }
            break;
        }
        else
        {
            roop++;
        }

    }

}
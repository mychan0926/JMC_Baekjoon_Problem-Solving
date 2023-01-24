#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int C = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            C++;
            if (j == M - 1)
            {
                cout << C;
            }
            else
            {

                cout << C << " ";
            }
        }
        cout << "\n";
    }

}
#include <stdio.h>
#include <stdlib.h>

int** v;
int N, M;
int maximum = 0;
int** block;
int block_size = 0;
int block_capacity = 10; // 초기 용량

int counting(int n, int m, int num)
{
    int* t = block[num];
    int is_overflow = 0;
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        int x = t[i] % 4;
        int y = t[i] / 4;
        if (y + n < N && x + m < M)
        {
            is_overflow = 0;
            sum += v[y + n][x + m];
        }
        else
        {
            is_overflow = 1;
            break;
        }
    }

    if (is_overflow)
    {
        return -1;
    }
    else
    {
        if (maximum < sum)
        {
            maximum = sum;
        }
        return sum;
    }
}

void create_block()
{
    block = (int**)malloc(sizeof(int*) * block_capacity);
    int t[4];

    for (t[0] = 0; t[0] < 16; t[0]++)
    {
        for (t[1] = t[0] + 1; t[1] < 16; t[1]++)
        {
            for (t[2] = t[1] + 1; t[2] < 16; t[2]++)
            {
                for (t[3] = t[2] + 1; t[3] < 16; t[3]++)
                {
                    int tmp[16] = {0};
                    int check_block = 0;

                    for (int i = 0; i < 4; i++)
                    {
                        tmp[t[i]] = 1;
                    }

                    for (int i = 0; i < 4; i++)
                    {
                        int dir[] = { -1, 1, -4, 4 };
                        for (int j = 0; j < 4; j++)
                        {
                            if (dir[j] + t[i] < 16 && dir[j] + t[i] >= 0)
                            {
                                if (tmp[dir[j] + t[i]] == 1)
                                {
                                    if (!(j < 2 && ((dir[j] + t[i]) / 4) != (t[i] / 4)))
                                    {
                                        check_block += 1;
                                    }
                                }
                            }
                        }
                    }

                    if (check_block < 6)
                    {
                        continue;
                    }
                    else
                    {
                        if (block_size == block_capacity)
                        {
                            block_capacity *= 2;
                            block = (int**)realloc(block, sizeof(int*) * block_capacity);
                        }
                        block[block_size] = (int*)malloc(sizeof(int) * 4);
                        for(int i=0; i<4; i++)
                        {
                            block[block_size][i] = t[i];
                        }
                        block_size++;
                    }
                }
            }
        }
    }
}

int main()
{
    scanf("%d %d", &N, &M);

    v = (int**)malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++)
    {
        v[i] = (int*)malloc(sizeof(int) * M);
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &v[i][j]);
        }
    }

    create_block();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < block_size; k++)
            {
                int tmp = counting(i, j, k);
                if (tmp > maximum)
                {
                    maximum = tmp;
                }
            }
        }
    }

    printf("%d\n", maximum);

    for (int i = 0; i < N; i++)
    {
        free(v[i]);
    }
    free(v);
    for (int i = 0; i < block_size; i++)
    {
        free(block[i]);
    }
    free(block);

    return 0;
}
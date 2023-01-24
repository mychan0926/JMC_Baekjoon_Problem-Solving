#include <stdio.h>

int main()
{
    int c[100];
    int N,v;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&v);
        c[i]=v;
    }
    scanf("%d",&v);
    int count=0;
    for(int i=0;i<N;i++)
    {
        if(v==c[i])
        {
            count++;
        }
    }
    printf("%d",count);
}
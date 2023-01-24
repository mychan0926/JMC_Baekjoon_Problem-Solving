#include <iostream>
#include <vector>

using namespace std;

int main()
    {
    
    int a,b,x,y;
    vector <int> s(1,0);
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++)
        {
        scanf("%d",&x);
        s.push_back(s[i]+x);
        }
    for(int i=0;i<b;i++)
        {
        scanf("%d %d",&x,&y);
      
        printf("%d",s[y]-s[x-1]);
        printf("\n");
        }
    
    
    }
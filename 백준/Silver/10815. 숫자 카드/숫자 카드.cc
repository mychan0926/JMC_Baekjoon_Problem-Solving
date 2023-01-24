#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

void BS(vector <int> &k,int a,int e,int f)
{   
    int sum=f-e;

        if ((sum) % 2 == 0)
        {
            if (k[(sum) / 2 + e] > a)
            {

                BS(k, a, e, (sum) / 2 +e);
                
            }
            else if (k[(sum) / 2 + e] < a)
            {
                BS(k, a, (sum) / 2+e,f);
                

            }
            else if(k[(sum) / 2 + e] == a)
            {
               
                
                cout<< "1 ";
                

            }
        }
        else
        {

            if ((sum)==1 && k[0]!=a)
            {
                cout << "0 ";
                
            }
            else if (k[((sum)-1) / 2 + e] > a)
            {
                BS(k, a, e, ((sum) - 1) / 2+e);
                
            }
            else if (k[((sum) - 1) / 2 + e] < a)
            {
                BS(k, a, (((sum)) - 1) / 2 +e, f);
                
               
            }
            else if (k[((sum) - 1) / 2 + e] == a)
            {


                printf("1 ");
                


            }
        }
    
}


int main()
{
    int a,b,c,d,e,N,M;
    vector <int> s;
    scanf("%d",&a);


    for (int i = 0; i < a; i++)
    {
        int j = 0;
        scanf("%d",&j);
        s.push_back(j);


    } 
    sort(s.begin(),s.begin()+a);
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    {
        int j = 0;
        scanf("%d",&j);

        BS(s, j,0,a);

    }

}
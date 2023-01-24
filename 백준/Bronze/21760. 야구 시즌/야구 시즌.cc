#include <iostream>
#include <string>
using namespace std;
int main() 
{

	int a,b,c,d,e;
    int M,N,K,D,A,B;
	cin >> a;
	for (int i=0;i<a;i++)
	{
		cin >> N >> M >> K >> D ;

        b= (D/((K*M-K+M*N-M)*N*M/2));

        c=K*b;
        if (b!=0)
        {
            cout <<(c*(M-1) + b*M*(N-1))*N*M/2 <<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
        
        


	}


	
}

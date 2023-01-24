#include <iostream>
#include <queue>
using namespace std;
int main() 
{
    priority_queue <long long int> As;
    priority_queue <long long int> Bs;
    priority_queue <long long int> Cs;
    priority_queue <long long int> Ds;
    long long int A,B,C,D,N,K;
    long long int a,b,c,d;
    int t;
    
    cin >> N >> K;
    cin >> A >> B >> C >> D;
    for (int i=0;i<N;i++)
    {
        long long int t2;
        char t1;
        cin >> t1 >> t2;
        
        As.push(0);
        Bs.push(0);
        Cs.push(0);
        Ds.push(0);

        if(t1=='A')
        {
            As.push(t2);
        }
        if(t1=='B')
        {
            Bs.push(t2);
        }
        if(t1=='C')
        {
            Cs.push(t2);
        }
        if(t1=='D')
        {
            Ds.push(t2);
        }
    }
    for (int i=0; i<K;i++)
    {
        double  full=1;
        char name;
        double e=0,f=0,g=0,h=0;
        e=(double )(A+As.top())/(double )A;
        f=(double )(B+Bs.top())/(double )B;
        g=(double )(C+Cs.top())/(double )C;
        h=(double )(D+Ds.top())/(double )D;

        if(full<e)
        {
            full=e;
            name='A';
        }
        if(full<f)
        {
            full=f;
            name='B';
        }
        if(full<g)
        {
            full=g;
            name='C';
        }
        if(full<h)
        {
            full=h;
            name='D';
        }

        if(name=='A')
        {
            A+=As.top();
            cout << name <<" "<<As.top() <<"\n";
            As.pop();
        }
        if(name=='B')
        {
            B+=Bs.top();
            cout << name <<" "<<Bs.top() <<"\n";
            Bs.pop();
        }
        if(name=='C')
        {
            C+=Cs.top();
            cout << name <<" "<<Cs.top() <<"\n";
            Cs.pop();
        }
        if(name=='D')
        {
            D+=Ds.top();
            cout << name <<" "<<Ds.top() <<"\n";
            Ds.pop();
        }
            
    }

    return 0;
}


#include <iostream>
#include <vector>



using namespace std;
vector <int> tmp;
int count =0;
int k;
void merge(vector <int> &A,int p,int q,int r) {
int i=p;
int j=q+1;
int t=1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j])
        {
          
          tmp[t++] = A[i++];
          }
          
        else 
        {
          tmp[t++] =A[j++];
          }
    }
    while (i<=q)  
        tmp[t++] = A[i++];
    while (j <=r)  
        tmp[t++] = A[j++];
    i = p; t = 1;
    while (i <= r) {count++;if (count == k){cout<<tmp[t];}A[i++] = tmp[t++]; }
}

  void merge_sort(vector <int> &A,int begin,int end)
{
  int p=begin;
  int r=end;
  int q;


    if (p < r)
{
        q = ((p + r) / 2);             
        merge_sort(A, p, q);      
        merge_sort(A, q + 1, r);  
        merge(A, p, q, r);       
}
}



int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int a,b,c;
  vector <int> s;
  cin>>a;
  cin >>k;
  tmp.resize(a+1,0);
  for(int i=0;i<a;i++)
    {
      cin>>b;
      s.push_back(b);
      
    }
merge_sort(s,0,a-1);
if (count<k){cout<<-1;}
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  vector<int> s;
  int a = -1;
  int b=0;
  string f;
  cin >>b;
  
  for (int i=0;i<b;i++)
    {
      string t;
      int g;
      cin >> f;
      
      if (f=="push")
      {
        cin>>g;
        s.push_back(g);
        a++;

        
      }
      else if (f=="pop")
      {
        if(a!=-1)
        {
          
        
        cout<<s[a]<<"\n";
         s.erase(s.begin()+a);
          a--;
          }
        else
        {
          cout<<-1<<"\n";
          
        }
      }
      else if (f=="size")
      {
        cout<<a+1<<"\n";
      }
      else if (f=="empty")
      {
        if(a==-1)
        {
          cout<<1<<"\n";
        }
        else
        {
          cout<<0<<"\n";
        }
        
      }
      else if (f=="top")
      {
        if(a!=-1)
        {
          
        
        cout<<s[a]<<"\n";
          }
        else
        {
          cout<<-1<<"\n";
          
        }
      }
    }
}
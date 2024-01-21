#include <bits/stdc++.h>
using namespace std;

signed main() {

 string n;
  cin>> n;
  reverse(n.begin(),n.end());
    
  string nn="";
  int Cnt = 0;
  for (int i = 1;i<n.size();i++)
  {
    if(Cnt==3)
    {
        nn+=',';
    nn+=n[i];
        Cnt=0;
    }
    else
    {
        nn+=n[i];
    }
    Cnt++;
  }
  
  cout<<nn<<endl ;

  return 0;

}
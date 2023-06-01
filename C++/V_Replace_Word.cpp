#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
  string s1="EGYPT";
  int pos=s.find(s1);
 while(pos!=-1)
{
    s.replace(pos,5," ");
    pos=s.find(s1);
}
  cout<<s;
    return 0;
}
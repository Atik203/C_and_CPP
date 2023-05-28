#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   // here iterator it is poiner and s.begin() and s.end() also pointers
   // we can use std:: iterator instead of auto 

   for(auto it=s.begin();it<s.end();it++) 
   {
    cout<<*it<<endl;
   }

    return 0;
}
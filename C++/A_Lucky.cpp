#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin>>test;
   for(int i=0;i<test;i++)
   {
   string s;
   cin>>s;
   int sum1 = 0;
   int sum2 = 0;
   int len=s.length();
   for(int i=0;i<len/2;i++)
   {
    sum1+=s[i];
   }
   for(int i=len/2;i<len;i++)
   {
    sum2+=s[i];
   }
   if(sum1==sum2)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }




   }
    return 0;
}
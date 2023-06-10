#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)   
   {
       string s;
       cin>>s;
       int n=s.size();
       char first=s[0];
       int flag=0;
       for(int i=0;i<n;i++)
       {
        if(s[0]!=s[i])
        {
            flag=1;
            break;
        }
       }
       if(flag)
       {
        cout<<n-1<<endl;
       }
       else
       {
        cout<<"-1"<<endl;
       }

   }
    return 0;
}
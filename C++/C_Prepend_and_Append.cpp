#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
      for(int i=0;i<s.size()/2;i++)
      {
        if(s[i] == s[n-1-i])
        {
            ans = n - 2*i;
            break;
        }
      }
      
      if(ans == 0 && n%2==1)
      {
        cout<<"1"<<endl;
      }
      else
      {
        cout<<ans<<endl;
      }

   }
   
    return 0;
}
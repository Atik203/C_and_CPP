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
     set<char> st;
     vector<int> prefix(n);
     for(int i=0;i<n;i++)
     {
      st.insert(s[i]);
      prefix[i]=st.size();
     }
     st.clear();
     vector<int> sufix(n);
     for(int i=n-1;i>=0;i--)
     {
      st.insert(s[i]);
      sufix[i]=st.size();
   }
   int ans = 0;
   for(int i=0;i<n-1;i++)
   {
    ans = max(ans,prefix[i]+sufix[i+1]);
   }
   cout<<ans<<endl;

   }
   
    return 0;
}
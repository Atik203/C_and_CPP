#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   vector<int> v(26,0);
   for(char c: s)
   {
     v[c-'a']++;
   }
   for(int i=0;i<26;i++)
   {
    if(v[i]>0)
    {
        char ch=i+'a';
        cout<<ch<<" : "<<v[i]<<endl;
    }
   }
    return 0;
}
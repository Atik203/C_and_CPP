#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {  
    string s;
    string a="codeforces";
    cin>>s;
    int found = a.find(s);
    if(found != string::npos)
    {
       cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

   }
    return 0;
}
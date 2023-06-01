#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin>>test;
   for(int i=0;i<test;i++)
   {
    int n;
    cin>>n;
  string s;
  cin>>s;
  int frq[26]={0};
  int sum=0;
  for(int i=0;i<s.size();i++)
 {
     if(frq[s[i]-'A']==0)
     {
        sum+=2;
        frq[s[i]-'A']=1;
     }  
     else
     {
        sum+=1;
     }

}
cout<<sum<<endl;

   }
    return 0;
}
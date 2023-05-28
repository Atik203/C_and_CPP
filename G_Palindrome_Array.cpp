#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int flag=1;
  
     for(int i=0,j=n-1;i<j;i++,j--)
     {
        if(a[i]!=a[j])
        {
            flag=0;
            break;
        }
       
     }
   if(flag==0)
   {
    cout<<"NO";
   }
   else
   cout<<"YES";
    return 0;
}

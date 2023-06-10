#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int fib1=0;
   int fib2=1;
   for(int i=2;i<n;i++)
   {
     int fib=(i-1)+(i-2);
     cout<<fib1<<" "<<fib2<<" "<<fib;
   }
    return 0;
}
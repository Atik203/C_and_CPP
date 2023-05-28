#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b;
   char sym;
   cin>>a>>sym>>b;
   if(sym=='>')
   {
    if(a>b)
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }
   }
    if(sym=='<')
   {
    if(a<b)
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }
   }
    if(sym=='=')
   {
    if(a==b)
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }
   }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int> myList;
   int v;
   while (true)
   {
    cin>>v;
    if(v==-1) break;
    else
    {
        myList.push_back(v);
    }
   }
   myList.sort();
   myList.unique();
   for(int val: myList)
   {
    cout<<val<<" ";
   }
   
    return 0;
}
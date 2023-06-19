#include<bits/stdc++.h>
using namespace std;
int main()
{
//    list<int> myList;
//    list<int> myList(5);
//    list<int> myList(5,2);
//   list<int> list1={1,2,3,4,5};
//   vector<int> v={2,3,4,5};
// list<int> myList(v.begin(),v.end());
  int a[5]={1,2,3,5,6};
  list<int> myList(a,a+5);

//   for(auto it=myList.begin(); it!= myList.end();it++)
//   {
//     cout<<*it<<endl;
//   }
  
  for(int val: myList)
  {
    cout<<val<<" ";
  }
   cout<<myList.size()<<endl;   
    return 0;
}
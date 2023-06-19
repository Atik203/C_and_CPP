#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int> myList={10,30,50,20,20,40};
//    myList.remove(20);
// sort(myList.begin(),myList.end(),greater<int>()); for vector
// myList.sort(); ascendeing order
// myList.sort(greater<int>()); descending order
//  myList.unique(); sorted must before 
myList.reverse();
   for(int val: myList)
   {
    cout<<val<<endl;
   }
    return 0;
}
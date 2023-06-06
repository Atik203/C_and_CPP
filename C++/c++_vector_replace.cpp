#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v={1,2,4,5,9,2,9,24,2};
//    replace(v.begin(),v.end(),2,50);
//    for(int x: v)
//    {
//     cout<<x<<" ";
//    }
auto it=find(v.begin(),v.end(),5);
if(it==v.end()) cout<<"not found";
else cout<<"found";
    return 0;
}
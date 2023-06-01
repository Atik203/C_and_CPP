#include<bits/stdc++.h>
using namespace std;
class custom_sort
{
    public:
    char c;
    int count;
};
bool cmp(custom_sort a, custom_sort b)
{
    if(a.count>b.count) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    custom_sort frq[26];
    for(int i=0;i<26;i++)
    {
       frq[i].c=(i+'a');
       frq[i].count=0;
    }
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        frq[c-'a'].count++;
    }
   sort(frq,frq+26,cmp);
   for(int i=0;i<26;i++)
   {
    if(frq[i].count>0)
    {
        for(int j=0;j<frq[i].count;j++)
        {
            cout<<frq[i].c;
        }
    }
   }
    return 0;
}
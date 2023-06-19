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
    set<int> distinct_values(a, a + n);
    int num_distinct = distinct_values.size();
    cout << num_distinct << endl;
   
    return 0;
}
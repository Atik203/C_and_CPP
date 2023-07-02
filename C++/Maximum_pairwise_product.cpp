#include<bits/stdc++.h>
using namespace std;
long long max_product(vector<int> &a)
{
    size_t n = a.size();
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max2 = a[i];
        }
    }

    return ((long long)max1 * max2);
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long result=max_product(a);
   cout<<result;
    return 0;
}
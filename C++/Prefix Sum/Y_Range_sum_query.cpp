#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, q;
    cin >> n >> q;
    ll a[n];
    ll prefix[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        ll sum = 0;
        if (l == 0)
        {
            sum = prefix[r];
        }
        else
        {
            sum = prefix[r] - prefix[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}
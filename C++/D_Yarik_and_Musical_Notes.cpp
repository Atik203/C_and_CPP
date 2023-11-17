#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> fre;
        for (ll i = 0; i < n; i++)
        {
            fre[a[i]]++;
        }
        ll ans = 0;
        for (auto i : fre)
        {
            ans = ans + i.second * (i.second - 1) / 2;
        }
        ans = ans + fre[1] * fre[2];
        cout << ans << endl;
    }
    return 0;
}
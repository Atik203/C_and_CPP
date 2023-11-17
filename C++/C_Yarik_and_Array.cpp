#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll maxSubArr(vector<ll> &a, int l, int r)
{
    ll mx = LLONG_MIN, mx_end = 0;
    for (int i = l; i <= r; i++)
    {
        mx_end = mx_end + a[i];
        if (mx < mx_end)
        {
            mx = mx_end;
        }
        if (mx_end < 0)
        {
            mx_end = 0;
        }
    }
    return mx;
}

int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int previous = 0;
        ll ans = LLONG_MIN;
        for (int i = 1; i < n; i++)
        {
            if ((abs(v[i]) % 2) == (abs(v[i - 1]) % 2))
            {
                ans = max(ans, maxSubArr(v, previous, i - 1));
                previous = i;
            }
        }
        ans = max(ans, maxSubArr(v, previous, n - 1));
        cout
            << ans << endl;
    }
    return 0;
}
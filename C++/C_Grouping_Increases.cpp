#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define endl '\n'
#define f(i, s, n) for (long long int i = s; i < n; i++)
#define cf(i, s, n) for (long long int i = s; i <= n; i++)
#define rf(i, s, n) for (long long int i = n - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
const int INF = 1e9;
#define PI 3.1415926535897932384626433832795
#define all(a) sort(a.begin(), a.end())
#define All(a, n) sort(a, a + n);
#define rall(a) sort(a.rbegin(), a.rend())

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    f(i, 0, n)
    {
        cin >> a[i];
    }

    ll mn1 = INF, mn2 = INF, res = 0;

    for (auto i : a)
    {
        if (mn1 > mn2)
        {
            swap(mn1, mn2);
        }
        if (i <= mn1)
        {
            mn1 = i;
        }
        else if (i <= mn2)
        {
            mn2 = i;
        }
        else
        {
            mn1 = i;
            res++;
        }
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

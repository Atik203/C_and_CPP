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
#define PI 3.1415926535897932384626433832795
#define all(a) sort(a.begin(), a.end())
#define All(a, n) sort(a, a + n);
#define rall(a) sort(a.rbegin(), a.rend())

void solve()
{
    int n, m;
    cin >> n >> m;

    vi a(n), b(m);
    f(i, 0, n)
    {
        cin >> a[i];
    }
    f(i, 0, m)
    {
        cin >> b[i];
    }

    rall(a);
    all(b);

    vi v;
    int i = 0, j = n - 1;
    int k = 0, l = m - 1;

    while (i <= j)
    {
        if (abs(a[i] - b[k]) > abs(a[j] - b[l]))
        {
            v.pb(abs(a[i] - b[k]));
            i++;
            k++;
        }

        else if (abs(a[i] - b[k]) < abs(a[j] - b[l]))
        {
            v.pb(abs(a[j] - b[l]));
            l--;
            j--;
        }

        else
        {
            v.pb(abs(a[j] - b[l]));
            if (a[i] > b[i])
            {
                l--;
                j--;
            }
            else
            {
                i++;
                k++;
            }
        }
    }
    int ans = accumulate(v.begin(), v.end(), 0);
    cout << ans << endl;
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

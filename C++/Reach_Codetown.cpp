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
    int n = 8;
    string s;
    cin >> s;
    string a = "CODETOWN";
    int ans[n];
    int v[n];
    f(i, 0, n)
    {
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'O' || a[i] == 'I' || a[i] == 'U')
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = 0;
        }
    }

    f(i, 0, n)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 0;
        }
    }

    f(i, 0, n)
    {
        if (ans[i] != v[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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

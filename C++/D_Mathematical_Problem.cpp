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
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    int ns = n / 2 + 1;

    for (int i = 0; i < ns - 1; ++i)
    {
        string x = "1" + string(i, '0') + "3" + string(ns - 2 - i, '0');
        cout << static_cast<long long>(pow(stoll(x), 2)) << endl;
    }

    for (int i = 0; i < ns - 1; ++i)
    {
        string x = "3" + string(i, '0') + "1" + string(ns - 2 - i, '0');
        cout << static_cast<long long>(pow(stoll(x), 2)) << endl;
    }

    string x = "14" + string(ns - 2, '0');
    cout << static_cast<long long>(pow(stoll(x), 2)) << endl;
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

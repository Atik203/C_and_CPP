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
#define rf(i, n, s) for (long long int i = e - 1; i >= n; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        f(i, 0, n)
        {
            cin >> v[i];
        }
        vi b(n + 1);
        b[0] = v[0];

        for (int i = 1; i < n; i++)
        {
            b[i] = (v[i] * v[i - 1]) / __gcd(v[i], v[i - 1]);
        }

        b[n] = v[n - 1];
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (__gcd(b[i], b[i + 1]) != v[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}

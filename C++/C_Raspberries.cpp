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
        int n, k;
        cin >> n >> k;
        vi v(n);
        int i;
        f(i, 0, n)
        {
            cin >> v[i];
        }
        if (k == 4)
        {
            int mn = k, ans = 2;
            f(i, 0, n)
            {
                if (v[i] % 4 == 0)
                {
                    mn = 0;
                    break;
                }
                else
                {
                    if (mn > k - v[i] % k)
                    {
                        mn = k - v[i] % k;
                    }
                }
            }
            f(i, 0, n)
            {
                if (v[i] % 2 == 0)
                {
                    ans = max(ans - 1, 0);
                }
            }
            cout << min(ans, mn) << endl;
        }
        else
        {
            int mn = k;
            f(i, 0, n)
            {
                if (v[i] % k == 0)
                {
                    mn = 0;
                    break;
                }
                else
                {
                    if (mn > k - v[i] % k)
                    {
                        mn = k - v[i] % k;
                    }
                }
            }
            cout << mn << endl;
        }
    }
    return 0;
}

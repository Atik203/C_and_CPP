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
    for (int case_num = 1; case_num <= t; case_num++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {

            ans += upper_bound(v.begin(), v.end(), b - v[i]) - v.begin();
            ans -= lower_bound(v.begin(), v.end(), a - v[i]) - v.begin();

            if (a <= 2 * v[i] && 2 * v[i] <= b)
                ans--;
        }

        cout << "Case " << t << ": " << ans / 2 << "\n";
    }
    return 0;
}

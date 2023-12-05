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
#define rf(i, n, s) for (long long int i = n - 1; i >= s; i--)
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
        ll n, p, l, t;
        cin >> n >> p >> l >> t;

        // Calculate the number of full weeks in the term
        ll rac = (n - n % 7) / 7 + 1;
        rac -= (n % 7 == 0 ? 1 : 0);

        ll left = 1, right = rac;
        ll ans = rac;

        while (left <= right)
        {
            ll mid = (left + right) / 2;
            if (p <= (mid + 1) / 2 * l + t * mid)
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        // Calculate the number of weeks and days Monocarp can rest
        long long rac2 = (ans + 1) / 2;
        long long taodeptrai = rac2 * l + t * ans;
        p = p - taodeptrai;
        ll tmp = rac2;
        p = max(p, 0LL);
        tmp = tmp + (p / l);
        tmp = tmp + (p % l != 0);

        // Output the result for the current test case
        cout << n - tmp << endl;
    }
    return 0;
}

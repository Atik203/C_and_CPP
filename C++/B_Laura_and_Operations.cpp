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
        int a, b, c;
        cin >> a >> b >> c;
        int ans1 = 0;
        int ans2 = 0;
        int ans3 = 0;
        if (abs(b - c) % 2 == 0)
            ans1 = 1;
        if (abs(a - c) % 2 == 0)
            ans2 = 1;
        if (abs(a - b) % 2 == 0)
            ans3 = 1;
        cout << ans1 << " " << ans2 << " " << ans3 << endl;
    }
    return 0;
}

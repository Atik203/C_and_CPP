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
int minOperations(int n, string s, string f)
{
    int count1 = 0, count2 = 0;

    f(i, 0, n)
    {
        if (s[i] == '1' && f[i] == '0')
        {
            count1++;
        }

        if (s[i] == '0' && f[i] == '1')
        {
            count2++;
        }
    }

    return max(count1, count2);
}
void solve()
{
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;

    int result = minOperations(n, s, f);

    cout << result << endl;
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

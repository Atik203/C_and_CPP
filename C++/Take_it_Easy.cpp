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

string ans(int n, int v[])
{
    int sum = 0;
    f(i, 0, n)
    {
        sum += v[i];
    }

    if (sum % 2 != 0)
    {
        return "No";
    }

    int d = sum / n;
    f(i, 0, n)
    {
        int b = v[i] - d;
        if (b % 2 != 0)
        {
            return "No";
        }
    }
    return "Yes";
}

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
        int v[n];
        int i;
        f(i, 0, n)
        {
            cin >> v[i];
        }

        cout << ans(n, v) << endl;
    }
    return 0;
}

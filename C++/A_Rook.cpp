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
        string s;
        cin >> s;
        char col = s[0];
        int row = s[1] - '0';

        vector<string> m;

        // Horizontal m
        for (char c = 'a'; c <= 'h'; ++c)
        {
            if (c != col)
            {
                m.push_back(string(1, c) + to_string(row));
            }
        }

        for (int r = 1; r <= 8; ++r)
        {
            if (r != row)
            {
                m.push_back(string(1, col) + to_string(r));
            }
        }

        for (auto v : m)
        {
            cout << v << endl;
        }
    }
    return 0;
}

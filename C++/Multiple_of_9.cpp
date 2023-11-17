#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
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
        string s;
        cin >> s;
        int si = 0;
        int b = 0;
        f(i, 0, n)
        {
            if (s[i] == '?')
                si++;

            else
            {
                b += (s[i] - '0');
            }
        }

        if (s[0] == '?')
        {
            cout << 1;
            si--;
            while (si--)
            {
                cout << 0;
            }
            cout << endl;
        }
        else
        {
            if (si > 0)
            {
                b = b % 9;
                if (b == 0)
                {
                    si--;
                    while (si--)
                    {
                        cout << 1;
                    }
                    cout << 2 << endl;
                }
                else
                {
                    while (si--)
                    {
                        cout << 1;
                    }
                    cout << endl;
                }
            }
            else
            {
                if (b % 9)
                {
                    cout << 0 << endl;
                }
                else
                    cout << 1 << endl;
            }
        }
    }
    return 0;
}

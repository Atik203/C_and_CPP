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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll numVal;

        string b;
        if (n == 1)
            cout << 8 << endl;
        else
        {
            if (n >= 3)
            {
                b = s.substr(n - 3, 3);
            }
            else
            {
                b = s;
            }
            if (n >= 3)
            {
                numVal = stoll(b);
            }
            else
            {
                numVal = stoll(s);
            }
            if (numVal % 8 == 0)
            {
                cout << s << endl;
            }
            else
            {
                ll remain = numVal % 8;
                if (numVal % 10 >= remain)
                {
                    numVal -= remain;
                }
                else
                {
                    numVal += 8 - remain;
                }

                string res = "";
                if (n >= 3)
                {
                    res += s.substr(0, n - 3);
                    string con = to_string(numVal);
                    reverse(con.begin(), con.end());
                    while (con.size() != b.size())
                    {
                        con += '0';
                    }
                    reverse(con.begin(), con.end());
                    res += con;
                    cout << res << endl;
                }
            }
        }
    }
    return 0;
}

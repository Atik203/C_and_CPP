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
        char a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        string s1 = {a1, a2, a3};
        string s2 = {b1, b2, b3};

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int a = stoi(s1);
        int b = stoi(s2);

        if (a > b)
        {
            cout << "Alice" << endl;
        }
        else if (a < b)
        {
            cout << "Bob" << endl;
        }
        else
            cout << "Tie" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];

int make_it(int cur, int n)
{
    if (cur == n)
    {
        return true;
    }

    if (cur > n || cur < 1)
    {
        return false;
    }

    if (dp[cur] != -1)
    {
        return dp[cur];
    }

    return dp[cur] = make_it(cur + 3, n) || make_it(cur * 2, n);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {

            dp[i] = -1;
        }

        if (make_it(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

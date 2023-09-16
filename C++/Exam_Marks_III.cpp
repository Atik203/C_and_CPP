#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        int s = 1000 - x;
        int dp[n + 1][s + 1];
        dp[0][0] = 0;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = INF;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (w[i - 1] <= j)
                {
                    dp[i][j] = min(1 + dp[i][j - w[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][s] == INF)
        {
            cout << -1 << endl;
        }
        else
            cout << dp[n][s] << endl;
    }
    return 0;
}
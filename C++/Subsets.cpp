#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        vector<int> A(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sum += A[i];
        }

        if (d > sum || (d + sum) % 2 != 0)
        {
            cout << "0" << endl;
            continue;
        }

        int target = (d + sum) / 2;

        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
        dp[0][0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j >= A[i - 1])
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - A[i - 1]]) % mod;
                }
            }
        }

        cout << dp[n][target] << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoinDifference(int N, vector<int> &coins)
{
    int totalSum = 0;
    for (int coin : coins)
    {
        totalSum += coin;
    }

    int halfSum = totalSum / 2;

    vector<vector<bool>> dp(N + 1, vector<bool>(halfSum + 1, false));

    // Base case: It's always possible to achieve a sum of 0.
    for (int i = 0; i <= N; ++i)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= halfSum; ++j)
        {
            dp[i][j] = dp[i - 1][j];
            if (coins[i - 1] <= j)
            {
                dp[i][j] = dp[i][j] || dp[i - 1][j - coins[i - 1]];
            }
        }
    }

    // Find the largest possible sum that can be achieved in the first half of the total sum.
    int chinkiSum = 0;
    for (int i = halfSum; i >= 0; --i)
    {
        if (dp[N][i])
        {
            chinkiSum = i;
            break;
        }
    }

    // Calculate the minimum difference.
    int minkiSum = totalSum - chinkiSum;
    return abs(chinkiSum - minkiSum);
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;

        vector<int> coins(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> coins[i];
        }

        int result = minCoinDifference(N, coins);
        cout << result << endl;
    }

    return 0;
}

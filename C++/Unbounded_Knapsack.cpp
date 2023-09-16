#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbounded_knapsack(int n, int s, int v[], int w[])
{
    if (n == 0 || s == 0)
        return 0;

    if (dp[n][s] != -1)
        return dp[n][s];
    if (w[n - 1] <= s)
    {
        int op1 = v[n - 1] + unbounded_knapsack(n, s - w[n - 1], v, w);
        int op2 = unbounded_knapsack(n - 1, s, v, w);
        return dp[n][s] = max(op1, op2);
    }
    else
    {
        return dp[n][s] = unbounded_knapsack(n - 1, s, v, w);
    }
}

int main()
{
    int n, w;
    cin >> n >> w;
    int val[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << unbounded_knapsack(n, w, val, weight) << endl;
    return 0;
}
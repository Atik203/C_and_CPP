#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18 + 7;
int main()
{
    int n, m;
    cin >> n >> m;

    long long dist[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = INF;
            if (i == j)
                dist[i][j] = 0;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        if (dist[x][y] == INF)
            cout << -1 << endl;
        else
            cout << dist[x][y] << endl;
    }

    return 0;
}

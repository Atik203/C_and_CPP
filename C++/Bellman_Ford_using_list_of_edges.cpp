#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int INF = 1e9 + 8;
const int N = 1e5 + 9;
vector<pii> g[N];
vector<pair<pii, int>> edge_list;
vector<int> dist(N);

void bellman(int s, int n)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }

    dist[s] = 0;
    for (int i = 1; i < n; i++)
    {

        for (auto e : edge_list)
        {
            int u = e.first.first;
            int v = e.first.second;
            int w = e.second;

            if (dist[u] != INF && dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        edge_list.push_back({{u, v}, w});
    }
    bellman(1, n);
    for (int i = 1; i <= n; i++)
    {
        cout << "Distance " << i << " :" << dist[i] << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e9 + 5;
const int N = 1e5 + 7;
vector<pii> adj[N];
vector<bool> visited(N);
vector<int> dist(N, INF);

void dijkstra(int s)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[s] = 0;
    pq.push({dist[s], s});
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;
        for (pii vpair : adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;
            if (visited[v])
                continue;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
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
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of node " << i << ": " << dist[i] << endl;
    }
    return 0;
}
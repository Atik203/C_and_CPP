#include <bits/stdc++.h>
using namespace std;

const long long int INF = 1e18 + 7;
const int N = 1e5 + 7;
typedef pair<int, int> pii;
vector<pii> g[N];
bool visited[N];
long long int dist[N];
int parent[N];
void dijkstra(int s, int n)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[s] = 0;
    pq.push({0, s});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if (visited[u])
            continue;
        visited[u] = true;
        for (auto child : g[u])
        {
            int v = child.first;
            int w = child.second;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
                parent[v] = u;
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
        g[v].push_back({u, w});
    }
    int s = 1;
    dijkstra(s, n);
    if (!visited[n])
    {
        cout << "-1" << endl;
        return 0;
    }
    int current = n;
    vector<int> path;
    while (true)
    {
        path.push_back(current);
        if (current == s)
        {
            break;
        }
        current = parent[current];
    }

    reverse(path.begin(), path.end());
    for (int v : path)
    {
        cout << v << " ";
    }

    return 0;
}
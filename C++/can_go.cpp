#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
const int N = 1e3 + 8;
const ll INF = 1e18;
vector<ll> dist(N, INF);
bool visited[N];
vector<pll> adj[N];

void dijkstra(int s)
{
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    dist[s] = 0;
    pq.push({0, s});

    while (!pq.empty())
    {
        ll u = pq.top().second;
        pq.pop();

        if (visited[u])
        {
            continue;
        }

        visited[u] = true;

        for (auto edge : adj[u])
        {
            ll v = edge.first;
            ll w = edge.second;

            if (dist[u] + w < dist[v])
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

    while (m--)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    int s;
    cin >> s;

    dijkstra(s);

    int t;
    cin >> t;
    while (t--)
    {
        int d, dw;
        cin >> d >> dw;
        if (dw >= dist[d])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

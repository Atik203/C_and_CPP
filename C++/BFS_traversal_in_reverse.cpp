#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
vector<int> adj[N];
bool visited[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        visited[s] = true;
        for (int v : adj[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    vector<int> bfsOrder;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            bfsOrder.push_back(i);
        }
    }

    reverse(bfsOrder.begin(), bfsOrder.end());

    for (int node : bfsOrder)
    {
        cout << node << " ";
    }
    return 0;
}
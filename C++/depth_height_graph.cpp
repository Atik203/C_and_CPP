#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
bool visited[N];
int depth[N];
int height[N];
vector<int> adj[N];
void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        depth[v] = depth[u] + 1;
        dfs(v);
        height[u] = max(height[u], height[v] + 1);
    }
}

int main()
{
    int n, m, d, h;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> d >> h;
    dfs(1);
    cout << "depth of " << d << " : " << depth[d] << endl;
    cout << "height of " << h << " : " << height[h] << endl;

    return 0;
}
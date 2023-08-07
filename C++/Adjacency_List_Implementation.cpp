#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
// vector<pair<int, int>> adj[N];
vector<int> adj[N];
bool visited[N];
void dfs(int u)
{
    visited[u] = true;
    cout << "visiting node " << u << ": " << endl;
    for (int v : adj[u])
    {
        if (visited[v] == true)
            continue;
        dfs(v);
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
        adj[v].push_back(u); // for directed graph
    }

    dfs(1);
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "List " << i << " : ";
    //     for (auto j : adj[i])
    //     {
    //         cout << "(" << j.first << " , " << j.second << ") ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
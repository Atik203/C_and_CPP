#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        dfs(v);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int k;
    cin >> k;
    dfs(k);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            count++;
        }
    }

    cout << count - 1 << endl;
    return 0;
}

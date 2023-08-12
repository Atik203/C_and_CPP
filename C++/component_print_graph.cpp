#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
vector<int> adj[N];
bool visited[N];
vector<int> c_list[N];
void dfs(int u, int cc)
{
    visited[u] = true;
    c_list[cc].push_back(u);
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        dfs(v, cc);
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
    int cc = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        cc++;
        dfs(i, cc);
    }
    cout << cc << endl;
    for (int i = 1; i <= cc; i++)
    {
        cout << "component " << i << " : ";
        for (auto v : c_list[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
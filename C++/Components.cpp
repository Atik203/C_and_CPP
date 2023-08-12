#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> adj[N];
bool visited[N];
vector<int> sz;

void dfs(int u)
{
    visited[u] = true;
    sz[sz.size() - 1]++;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
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
        adj[v].push_back(u);
    }

    for (int i = 0; i < N; i++)
    {
        if (!visited[i] && !adj[i].empty())
        {
            sz.push_back(0);
            dfs(i);
            if (sz[sz.size() - 1] == 1)
            {
                sz.pop_back(); // Remove the last element if it's a single-node component
            }
        }
    }

    sort(sz.begin(), sz.end());

    for (int v : sz)
    {
        cout << v << " ";
    }

    return 0;
}

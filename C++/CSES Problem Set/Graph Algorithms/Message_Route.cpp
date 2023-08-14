#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
vector<int> g[N];
vector<bool> visited(N, false);
vector<int> level(N, 0);
vector<int> parent(N, -1);

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    level[s] = 0;
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : g[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            parent[v] = u;
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
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs(1);
    if (level[n] == 0)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << level[n] + 1 << endl;

        int cur = n;
        vector<int> path;

        while (cur != -1)
        {
            path.push_back(cur);
            cur = parent[cur];
        }

        reverse(path.begin(), path.end());

        for (auto v : path)
        {
            cout << v << " ";
        }
    }
    return 0;
}
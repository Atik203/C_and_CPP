#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 8;
vector<int> g[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : g[u])
    {
        if (visited[v])
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
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        ans.push_back(i);
        dfs(i);
    }

    cout << ans.size() - 1 << endl;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << " " << ans[i + 1] << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 8;
vector<int> adj[N];
bool visited[N];
int dist[N];
vector<int> cmp;

void dfs(int s)
{
    visited[s] = true;
    cmp.push_back(s);
    for (int v : adj[s])
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
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            count++;
            for (int v : cmp)
            {
                cout << v << " ";
            }
            cout << endl;
        }
        cmp.clear();
    }
    cout << count << endl;
    return 0;
}
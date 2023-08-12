#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
vector<int> s_level;
void bfs(int s, int l)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (level[u] == l)
        {
            s_level.push_back(u);
        }
        for (int v : adj[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
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

    int l;
    cin >> l;

    bfs(0, l);

    if (s_level.empty())
    {
        cout << "-1" << endl;
    }
    else
    {
        sort(s_level.begin(), s_level.end());
        for (int v : s_level)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}

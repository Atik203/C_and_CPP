#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
const int N = 1e5 + 8;
vector<pii> adj[N];
bool visited[N];
class edge
{
public:
    int a, b, w;
    edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
class cmp
{
public:
    bool operator()(edge a, edge b)
    {
        return a.w > b.w;
    }
};

void prims(int s, int n)
{
    priority_queue<edge, vector<edge>, cmp> pq;
    vector<edge> edgeList;
    int count = 0;
    pq.push(edge(s, s, 0));
    while (!pq.empty())
    {
        edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        if (visited[b])
            continue;
        visited[b] = true;
        count++;
        edgeList.push_back(parent);
        for (auto v : adj[b])
        {
            int node = v.first;
            int w = v.second;
            if (!visited[node])
            {
                pq.push(edge(b, node, w));
            }
        }
    }
    edgeList.erase(edgeList.begin());
    long long sum = 0;
    for (edge val : edgeList)
    {
        sum += (long long)val.w;
    }
    if (count == n)
    {
        cout << sum << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    prims(1, n);
    return 0;
}
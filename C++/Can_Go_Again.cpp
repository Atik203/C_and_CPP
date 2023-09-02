#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 1e18 + 7;
class edge
{
public:
    ll u, v, w;
    edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<edge> v;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        edge ed(a, b, w);
        v.push_back(ed);
    }
    ll dist[n + 1];
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
    int s;
    cin >> s;
    dist[s] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            edge ed = v[j];
            ll a = ed.u;
            ll b = ed.v;
            ll w = ed.w;

            if (dist[a] != INF && dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
            }
        }
    }
    bool cycle = false;
    for (int j = 0; j < v.size(); j++)
    {
        edge ed = v[j];
        ll a = ed.u;
        ll b = ed.v;
        ll w = ed.w;

        if (dist[a] != INF && dist[a] + w < dist[b])
        {
            cycle = true;
            break;
            dist[b] = dist[a] + w;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;

        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else if (dist[d] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[d] << endl;
        }
    }

    return 0;
}
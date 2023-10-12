#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int parentSize[N];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

int mx = 0;

void dsu_union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
            mx = max(mx, parentSize[leaderA]);
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
            mx = max(mx, parentSize[leaderB]);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    int comp = n;
    long long cost = 0;

    vector<pair<int, pair<int, int>>> roads;

    for (int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        roads.push_back({w, {a, b}});
    }

    sort(roads.begin(), roads.end());

    for (int i = 0; i < e; i++)
    {
        int a = roads[i].second.first;
        int b = roads[i].second.second;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA != leaderB)
        {
            comp--;
            dsu_union(a, b);
            cost += roads[i].first;
        }
    }

    if (comp == 1)
    {
        cout << e - (n - 1) << " " << cost << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    return 0;
}

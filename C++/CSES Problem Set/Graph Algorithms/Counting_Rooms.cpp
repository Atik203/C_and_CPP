#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e3 + 8;
vector<string> g;
bool visited[N][N];
vector<pii> direction = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool isValid(int i, int j, int n, int m)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j, int n, int m)
{
    if (!isValid(i, j, n, m))
        return;
    if (g[i][j] == '#')
        return;
    if (visited[i][j])
        return;

    visited[i][j] = true;
    for (auto v : direction)
    {
        dfs(i + v.first, j + v.second, n, m);
    }
    // alternative way
    // dfs(i, j + 1, n, m);
    // dfs(i, j - 1, n, m);
    // dfs(i - 1, j, n, m);
    // dfs(i + 1, j, n, m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        g.push_back(s);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '#')
                continue;
            if (visited[i][j])
                continue;
            dfs(i, j, n, m);
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
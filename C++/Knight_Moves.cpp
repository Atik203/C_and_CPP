#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 105;
int visited[N][N];
int level[N][N];
int n, m;
vector<pii> path = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pii p = q.front();
        int i = p.first;
        int j = p.second;
        q.pop();

        for (auto d : path)
        {
            int ni = i + d.first;
            int nj = j + d.second;

            if (isValid(ni, nj) && !visited[ni][nj])
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
            }
        }
    }
}

void reset_level_vis()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            level[i][j] = 0;
            visited[i][j] = false;
        }
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj;
        cin >> qi >> qj;

        bfs(ki, kj);
        if (!visited[qi][qj])
            cout << -1 << endl;
        else
        {
            cout << level[qi][qj] << endl;
        }
        reset_level_vis();
    }

    return 0;
}
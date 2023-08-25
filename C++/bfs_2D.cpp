#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 1e3 + 5;
bool visited[N][N];
int dist[N][N];
vector<pii> path = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int n, m;

bool isValid(int ni, int nj)
{
    if (ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj])
        return true;
    else
        return false;
}
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    dist[si][sj] = 0;
    visited[si][sj] = true;

    while (!q.empty())
    {
        pii parent = q.front();
        int pi = parent.first;
        int pj = parent.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            pii p = path[i];
            int ni = pi + p.first;
            int nj = pj + p.second;

            if (isValid(ni, nj))
            {
                visited[ni][nj] = true;
                dist[ni][nj] = dist[pi][pj] + 1;
                q.push({ni, nj});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;

    bfs(si, sj);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
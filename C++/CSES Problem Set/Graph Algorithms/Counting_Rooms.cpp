#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
const int N = 1e3 + 5;
bool visited[N][N];
vector<pii> path = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int n, m;
char a[N][N];
bool isValid(int ni, int nj)
{
    if (ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj] && a[ni][nj] == '.')
        return true;
    else
        return false;
}

void dfs(int si, int sj)
{
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        pii p = path[i];
        int ni = si + p.first;
        int nj = sj + p.second;
        if (isValid(ni, nj))
        {
            dfs(ni, nj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && a[i][j] == '.')
            {
                count++;
                dfs(i, j);
            }
        }
    }
    cout << count << endl;

    return 0;
}
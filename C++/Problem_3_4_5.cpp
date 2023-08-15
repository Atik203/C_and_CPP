#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e3 + 7;
vector<string> g;
bool visited[N][N];
pii parent[N][N];
int level[N][N];
vector<pii> direction = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

bool isValid(int i, int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(int si, int sj, int n, int m)
{
    queue<pii> q;
    q.push({si, sj});
    level[si][sj] = 0;
    visited[si][sj] = true;
    while (!q.empty())
    {
        pii uPair = q.front();
        int i = uPair.first;
        int j = uPair.second;
        q.pop();

        for (auto d : direction)
        {
            int ni = i + d.first;
            int nj = j + d.second;

            if (isValid(ni, nj, n, m) && g[ni][nj] != 'x' && !visited[ni][nj])
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
                parent[ni][nj] = {i, j};
            }
        }
    }
}

int main()
{
    int n, m, si, sj, di, dj;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 's')
            {
                si = i;
                sj = j;
            }
            if (s[j] == 'e')
            {
                di = i;
                dj = j;
            }
        }
        g.push_back(s);
    }
    bfs(si, sj, n, m);
    if (level[di][dj] != 0)
    {
        cout << "YES" << endl;
        cout << level[di][dj] << endl;
        vector<pii> path;
        pii cur = {di, dj};

        while (!(cur.first == si && cur.second == sj))
        {
            path.push_back(cur);
            cur = parent[cur.first][cur.second];
        }
        path.push_back({si, sj});
        reverse(path.begin(), path.end());

        for (int i = 1; i < path.size(); i++)
        {
            if (path[i - 1].first == path[i].first)
            {
                if (path[i - 1].second == path[i].second - 1)
                {
                    cout << "R";
                }
                else
                {
                    cout << "L";
                }
            }
            else
            {
                if (path[i - 1].first == path[i].first - 1)
                {
                    cout << "D";
                }
                else
                    cout << "U";
            }
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}
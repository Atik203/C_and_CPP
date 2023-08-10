#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adjList[N];
int main()
{
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1)
            {
                adjList[i].push_back(j);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << " : ";
        for (auto v : adjList[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}

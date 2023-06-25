#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

vector<int> primes;
vector<int> items;
vector<vector<int>> sons;
vector<int> temp;

void findItems(int p, int x) {
    if (x > 10000) return;
    if (p >= primes.size()) {
        items.push_back(x);
        sons.push_back(temp);
        return;
    }
    findItems(p + 1, x);
    temp.push_back(primes[p]);
    findItems(p + 1, primes[p] * x);
    temp.pop_back();
}

void checkList() {
    for (int i = 0; i < items.size(); i++) {
        cout << items[i] << ":";
        for (int x : sons[i])
            cout << " " << x;
        cout << endl;
    }
}

const int N = 5050;
int n, v[N];
vector<int> g[N];
int dp[N][100];

void dfs(int u, int f) {
    for (int v : g[u]) {
        if (v != f) {
            dfs(v, u);
        }
    }
    fill(dp[u], dp[u] + 100, 10000);
    for (int i = 0; i < items.size(); i++) {
        int cost = v[u] % items[i] == 0 ? 0 : items[i];
        for (int v : g[u]) {
            if (v == f) continue;
            int minn = 10000;
            for (int x : sons[i]) {
                minn = min(minn, dp[v][x]);
            }
            cost += minn;
        }
        for (int x : sons[i]) {
            dp[u][x] = min(dp[u][x], cost);
        }
    }
}

int main() {
    for (int i = 100; i >= 2; i--) {
        if (isPrime(i))
            primes.push_back(i);
    }

    findItems(0, 1);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1, u, v; i < n; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);

    cout << *min_element(dp[1], dp[1] + 100) << endl;

    return 0;
}

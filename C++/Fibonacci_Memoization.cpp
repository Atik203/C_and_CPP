#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int save[N];

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // memoization
    if (save[n] != -1)
    {
        return save[n];
    }
    save[n] = fibo(n - 1) + fibo(n - 2);
    return save[n];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        save[i] = -1;
    }
    int ans = fibo(n);
    cout << ans << endl;
    return 0;
}
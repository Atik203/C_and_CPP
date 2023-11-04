#include <bits/stdc++.h>
using namespace std;

bool isOdd(int num)
{
    return (num & 1) == 1;
}

int subarrays(vector<int> &a, int n, int k)
{
    int oddCount = 0;
    int result = 0;

    for (int i = 0; i < k; i++)
    {
        oddCount |= a[i];
    }

    if (isOdd(oddCount))
    {
        result++;
    }

    for (int i = k; i < n; i++)
    {
        oddCount ^= a[i - k];
        oddCount |= a[i];

        if (isOdd(oddCount))
        {
            result++;
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int result = subarrays(a, n, k);
        cout << result << endl;
    }

    return 0;
}

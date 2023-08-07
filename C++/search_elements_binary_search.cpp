#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int l = 0, r = n - 1;
    int first = -1, last = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == k)
        {
            first = mid;
            r = mid - 1;
        }
        else if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == k)
        {
            last = mid;
            l = mid + 1;
        }
        else if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (last - first > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

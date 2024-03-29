#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int r, int mid)
{
    int left_size = mid - l + 1;
    int right_size = r - mid;
    int L[left_size + 1];
    int R[right_size + 1];

    for (int i = l, j = 0; i <= mid; i++, j++)
    {
        L[j] = a[i];
    }
    for (int i = mid + 1, j = 0; i <= r; i++, j++)
    {
        R[j] = a[i];
    }
    L[left_size] = INT_MAX;
    R[right_size] = INT_MAX; // for reversed order have to use INT_MIN

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[lp] <= R[rp]) // for reverse have use <=
        {
            a[i] = L[lp];
            lp++;
        }
        else
        {
            a[i] = R[rp];
            rp++;
        }
    }
}
void merge_sort(int a[], int l, int r)
{
    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);
    merge(a, l, r, mid);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
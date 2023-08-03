#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int n, int m, int merge_arr[])
{
    int i = 0; // a[]
    int j = 0; // b[]
    int k = 0; // merge_arr[]

    while (i < n && j < m)
    {

        if (a[i] >= b[j])
        {
            merge_arr[k] = a[i];

            i++;
        }
        else
        {
            merge_arr[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        merge_arr[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        merge_arr[k] = b[j];
        j++;
        k++;
    }
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
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int sz = n + m;
    int merge_arr[sz];

    merge(a, b, n, m, merge_arr);

    for (int i = 0; i < sz; i++)
    {
        cout << merge_arr[i] << " ";
    }

    return 0;
}

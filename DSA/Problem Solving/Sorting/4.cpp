#include <bits/stdc++.h>
using namespace std;

// Sort an array by absolute value in ascending order.

void insertion_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && abs(a[j]) > abs(key))
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    insertion_sort(a);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
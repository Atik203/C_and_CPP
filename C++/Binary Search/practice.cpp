#include <bits/stdc++.h>
using namespace std;

int binarySearch(long long arr[], int size, int value)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = (left + (right - left)) / 2;

        if (arr[mid] == value)
        {
            return mid;
        }

        if (arr[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (q--)
    {
        int value;
        cin >> value;
        long long int finalresult = binarySearch(arr, n, value);
        if (finalresult != -1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}

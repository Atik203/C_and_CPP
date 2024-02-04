#include <bits/stdc++.h>
using namespace std;

// binary search
// time complexity is O(logn)
// space complexity is O(1)
// it is used to search an element in a sorted array
// if the element is found then return the index of the element
// else return -1
// if the array is not sorted then first sort the array and then apply binary search

int binary_search(vector<int> &v, int x)
{
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == x)
        {
            return mid;
        }
        else if (v[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int x;
    cin >> x;
    int result = binary_search(v, x);
    if (result != -1)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}

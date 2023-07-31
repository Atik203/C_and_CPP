#include <bits/stdc++.h>
using namespace std;
int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    int n = grid[0].size();
    // Iterate on all rows of the matrix one by one.
    for (auto &row : grid)
    {
        // Using binary search find the index of the first negative element.

        int index = upper_bound(row.begin(), row.end(), 0, greater<int>()) - row.begin();

        // cout
        //     << index << " ";
        // cout << *row.begin() << endl;
        // 'index' points to the first negative element,
        // which means 'n - index' is the number of all negative elements.
        count += (n - index);
    }
    return count;
}
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    int a = countNegatives(grid);
    cout << a << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int prev = arr[0];
        int count = 1;

        cout << count << endl;
        cout << prev << " ";

        for (int i = 1; i < n; ++i)
        {
            int next = arr[i];
            if (prev <= next)
            {
                cout << next << " ";
                prev = next;
                count++;
            }
            else
            {
                cout << next << " " << next << " ";
                prev = next;
                count += 2;
            }
        }

        cout << endl;
    }

    return 0;
}

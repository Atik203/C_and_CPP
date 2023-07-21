#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int Count = 0;
        int Number = 0;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
            if (mp[num] > Count || (mp[num] == Count && num > Number))
            {
                Count = mp[num];
                Number = num;
            }
        }

        cout << Number << " " << Count << endl;
    }

    return 0;
}

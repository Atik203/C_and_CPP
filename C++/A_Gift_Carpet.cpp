#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int row, col;
        cin >> row >> col;

        vector<string> v;

        for (int i = 0; i < row; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        string p = "vika";
        int ind = 0;
        int count = 0;

        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                char c = v[j][i];
                if (c == p[ind])
                {
                    ind++;
                    count++;
                    break;
                }
            }
            if (count == 4)
                break;
        }

        if (count == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        t--;
    }

    return 0;
}

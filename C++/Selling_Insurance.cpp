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

        float x = (n * 20) / 100;
        int count = 0;
        float a = 0;
        while (a <= 100 && x > 0)
        {
            count++;
            a = a + x;
        }
        if (count == 0)
        {
            cout << 0 << endl;
        }
        else
            cout << count << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    for (int caseNo = 1; caseNo <= t; caseNo++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> count(26, 0);
        for (char c : s)
        {
            count[c - 'A']++;
        }

        vector<char> admirers;
        for (int i = 0; i < 26; i++)
        {
            if (is_prime(count[i]))
            {
                admirers.push_back(i + 'A');
            }
        }

        cout << "Case " << caseNo << ":" << endl;
        if (admirers.empty())
        {
            cout << "Love complexity of time !" << endl;
        }
        else
        {
            sort(admirers.begin(), admirers.end());
            for (char c : admirers)
            {
                cout << c << " = " << count[c - 'A'] << endl;
            }
        }
    }

    return 0;
}

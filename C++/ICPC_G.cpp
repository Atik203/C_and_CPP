#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        int overs = n / 6;
        int balls = n % 6;

        int wickets = 0;
        int runs = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
            {
                wickets++;
            }
            else
            {
                runs += (s[i] - '0');
            }
        }

        cout << overs << "." << balls << " Over" << (n > 6 ? "s" : "") << " " << runs << " Run" << (runs > 1 ? "s" : "") << " " << wickets << " Wicket" << (wickets > 1 ? "s" : "") << "." << endl;
    }
    return 0;
}

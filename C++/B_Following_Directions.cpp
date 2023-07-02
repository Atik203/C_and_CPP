#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<char> a;
        for (int i = 0; i < n; i++) 
        {
            char c;
            cin >> c;
            a.push_back(c);
        }

        bool pass = false;
        int sum1 = 0, sum2 = 0;
        for (char c : a) 
        {
            if (c == 'U') 
            {
                sum2++;
            } 
            else if (c == 'R') 
            {
                sum1++;
            } 
            else if (c == 'D') 
            {
                sum2--;
            } 
            else 
            {
                sum1--;
            }
            if (sum1 == 1 && sum2 == 1) 
            {
                pass = true;
                break;
            }
        }

        if (pass) 
        {
            cout << "YES" << endl;
        }
         else 
         {
            cout << "NO" << endl;
        }
    }

    return 0;
}

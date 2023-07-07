#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s) 
        {
            if (st.empty()) 
            {
                st.push(c);
            } 
            else if ((c == 'A' && st.top() == 'B') || (c == 'B' && st.top() == 'A'))
             {
                st.pop();
            } 
            else 
            {
                st.push(c);
            }
        }

        if (st.empty()) 
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

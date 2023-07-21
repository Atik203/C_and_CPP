#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int com;
        cin >> com;
        if (com == 0)
        {
            int v;
            cin >> v;
            pq.push(v);
            cout << pq.top() << endl;
        }
        else if (com == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (com == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {

                    cout << pq.top() << endl;
                }
            }
        }
    }

    return 0;
}
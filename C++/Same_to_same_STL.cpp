#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n,m;
    cin >> n>>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> q;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    bool flag = true;
    if(st.size() == q.size())
    {
        while (!st.empty() && !q.empty())
        {
            int a=st.top();
            int b=q.front();
            if(a != b)
            {
                flag=false;
                break;
            }
            else
            {
                st.pop();
                q.pop();
            }    
        }
    }
    else
    {
        flag = false;
    }
   if(flag == true) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}
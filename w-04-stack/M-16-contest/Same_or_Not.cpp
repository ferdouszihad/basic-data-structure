#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    stack<int> st;
    queue<int> q;

    while (n1--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (n2--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES" << endl;
    return 0;
}
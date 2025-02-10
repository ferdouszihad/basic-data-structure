#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char ch : s)
        {
            if (st.empty())
            {
                st.push(ch);
            }
            else
            {
                if (ch == '1' && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(ch);
                }
            }
        }
        st.empty() ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
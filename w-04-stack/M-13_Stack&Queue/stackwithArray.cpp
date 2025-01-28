#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;

    int top()
    {
        if (v.empty())
            return 0;
        return v.back();
    }
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {

        if (v.empty())
            return;
        v.pop_back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {

        return v.empty();
    }
};
int main()
{
    myStack st;
    int n;
    while (cin >> n)
    {
        st.push(n);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << st.top() << endl;

    return 0;
}
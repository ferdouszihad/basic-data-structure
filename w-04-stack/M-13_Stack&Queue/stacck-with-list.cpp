#include <bits/stdc++.h>
using namespace std;
class myStack
{
    list<int> li;

public:
    int top()
    {
        if (li.empty())
            return 0;
        return li.back();
    }
    void push(int val)
    {
        li.push_back(val);
    }
    void pop()
    {

        if (li.empty())
            return;
        li.pop_back();
    }
    int size()
    {
        return li.size();
    }
    bool empty()
    {

        return li.empty();
    }
};
int main()
{
    myStack st;

    while (1)
    {
        int option;
        cin >> option;
        switch (option)
        {
        case 0:
            cout << "Showing the top of List" << endl;
            cout << st.top() << endl;
            break;
        case 1:
            cout << "Inserting at the stack. Enter a value" << endl;
            int n;
            cin >> n;
            cout << "Top is Now >> " << st.top() << endl;
            break;
        case 2:
            cout << "deleting  at the stack. Enter a value" << endl;
            int n;
            cin >> n;
            cout << "Top is Now >> " << st.top() << endl;
            break;
        }
    }

    return 0;
}
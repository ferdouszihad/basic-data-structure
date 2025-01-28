#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    cout << "WELCOME TO STACK" << endl;
    cout << "IN-OUT-SIZE-TOP-EMPTY-CLEAR-END" << endl;
    while (1)
    {

        string option;
        cin >> option;

        if (option == "top")
        {
            if (st.empty())
            {
                cout << "stack is now empty" << endl;

                continue;
            }
            cout << st.top() << endl;
        }
        else if (option == "in")
        {
            int n;
            cin >> n;
            st.push(n);
        }
        else if (option == "out")
        {

            if (st.empty())
            {
                cout << "stack is now empty" << endl;

                continue;
            }
            st.pop();
            cout << "TOP is NOw = " << st.top() << endl;
        }
        else if (option == "size")
        {

            cout << st.size() << endl;
        }
        else if (option == "empty")
        {

            st.empty() ? cout << "Empty" << endl : cout << "Not Empty";
        }
        else if (option == "clear")
        {

            while (!st.empty())
            {
                cout << st.top() << endl;
                st.pop();
            }
            cout << "STACK is Now Empty" << endl;
        }
        else if (option == "end")
        {
            break;
        }
    }

    return 0;
}
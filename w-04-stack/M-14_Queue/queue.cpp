#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    stack<int> s;

    string opt;
    while (cin >> opt)
    {
        if (opt == "in")
        {
            int num;
            cin >> num;
            q.push(num);
            cout << "size = " << q.size() << " | ";
            cout << "front = " << q.front() << " | ";
            cout << "back = " << q.back() << " | ";
            cout << endl;
        }
        else if (opt == "out")
        {
            if (q.empty())
            {
                cout << "Queuee is empty" << endl;
                continue;
            }
            cout << q.front() << " have left✈️" << endl;

            q.pop();
            if (q.empty())
            {
                cout << "Queuee is empty" << endl;
                continue;
            }
            cout << "size = " << q.size() << " | ";
            cout << "front = " << q.front() << " | ";
            cout << "back = " << q.back() << " | ";
            cout << endl;
        }
    }

    return 0;
}
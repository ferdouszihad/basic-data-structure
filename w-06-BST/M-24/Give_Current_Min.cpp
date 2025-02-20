#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int num;
        cin >> num;
        pq.push(num);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int opt;
        cin >> opt;
        switch (opt)
        {
        case 0:
        {
            int newVal;
            cin >> newVal;
            pq.push(newVal);
            cout << pq.top() << endl;
            break;
        }
        case 1:
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }

            break;
        }
        case 2:
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

            break;
        }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void print(list<int> li)
{
    cout << "L -> ";

    for (int num : li)
    {
        cout << num << " ";
    }
    cout << endl;
    li.reverse();
    cout << "R -> ";

    for (int num : li)
    {
        cout << num << " ";
    }
    cout << endl;
    //  << "size = " << li.size() << endl;
}
int main()
{
    list<int> li;
    int t;
    cin >> t;
    while (t--)
    {
        int option;
        cin >> option;

        switch (option)
        {
        case 0:
        {
            int value;
            cin >> value;
            li.push_front(value);
            print(li);

            break;
        }
        case 1:
        {
            int value;
            cin >> value;
            li.push_back(value);
            print(li);
            break;
        }
        case 2:
        {
            int pos;
            cin >> pos;
            if (li.empty())
            {
                print(li);
                break;
            }
            if (pos == 0)
            {
                li.pop_front();
                print(li);
            }
            else if (pos < li.size() - 1)
            {
                li.erase(next(li.begin(), pos));
                print(li);
            }
            else if (pos == li.size() - 1)
            {
                li.pop_back();
                print(li);
            }
            else
            {
                print(li);
            }

            break;
        }
        }
    }

    return 0;
}
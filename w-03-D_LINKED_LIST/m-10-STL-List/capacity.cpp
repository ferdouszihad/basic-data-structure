#include <bits/stdc++.h>
using namespace std;
void printList(list<int> li)
{
    if (li.empty())
    {
        cout << "List is Empty" << endl;
        return;
    }
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> li;
    int n;
    while (cin >> n)
    {
        li.push_back(n);
    }

    cout << "size = " << li.size() << endl;
    cout << "max size = " << li.max_size() << endl;
    li.resize(0);
    printList(li);
    // printList(li);
    // li.clear();

    return 0;
}
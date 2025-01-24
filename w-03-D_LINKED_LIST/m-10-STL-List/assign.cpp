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
    // assign the list to another list
    list<int> li2;

    // list<int> li2;
    // li2.assign(li.begin(), li.end());

    // list<int> li2(li);

    // list<int> li2;
    // li2 = li;

    printList(li2);

    return 0;
}
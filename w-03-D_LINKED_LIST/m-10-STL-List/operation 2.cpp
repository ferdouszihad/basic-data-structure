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
    printList(li);

    li.remove(3); // remove all the x from a list
    printList(li);

    li.sort(); // sort ascending order
    printList(li);

    li.sort(greater<int>()); // sort descending order
    printList(li);

    li.unique(); // remove duplicate element
    printList(li);

    li.reverse(); // reverse a list
    printList(li);

    return 0;
}
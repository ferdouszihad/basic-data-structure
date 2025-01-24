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

        return 0;
}
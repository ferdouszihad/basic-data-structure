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
    li.push_back(18); // insert at Tail
    printList(li);

    li.push_front(99); // insert at head
    printList(li);

    li.insert(next(li.begin(), 1), 100); // insert at any position
    printList(li);

    li.pop_back(); // delete at tail
    printList(li);

    li.pop_front(); // delete4 at head
    printList(li);

    li.erase(next(li.begin(), 2)); // delete from any position
    printList(li);
    //      -------range------, val,replace_val
    replace(li.begin(), li.end(), 2, 0);
    printList(li);

    auto res = find(li.begin(), li.end(), 101); // find any element
    if (res == li.end())
    {
        cout << "Not Found" << endl;
    }

    cout << "Head = " << li.front() << endl; // access head
    cout << "Tail = " << li.back() << endl;  // access tail
    cout << "size = " << li.size() << endl;  // Get Size
    cout << "2nd element = " << *next(li.begin(), 1) << endl;
    // accessing any element
    return 0;
}
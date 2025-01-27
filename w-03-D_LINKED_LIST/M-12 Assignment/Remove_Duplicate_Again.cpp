#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    int n;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        li.push_back(n);
    }
    li.sort();
    li.unique();
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
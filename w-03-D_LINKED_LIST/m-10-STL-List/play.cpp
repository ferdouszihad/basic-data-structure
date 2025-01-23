#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 11, 34, 5, 6};
    vector<int> v = {10, 1, 2};
    list<int> li(10, 4);
    list<int> li2(v.begin(), v.end());
    for (auto it = li2.begin(); it != li2.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
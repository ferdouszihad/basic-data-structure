#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    reverse(v.begin(), v.end());

    int newNum;
    cin >> newNum;
    v.push_back(newNum);

    int curr_idx = v.size() - 1;
    int parent_idx = (curr_idx - 1) / 2;

    while (v[parent_idx] > v[curr_idx])
    {
        swap(v[parent_idx], v[curr_idx]);
        curr_idx = parent_idx;
        parent_idx = (curr_idx - 1) / 2;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> nums;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            nums.insert(val);
        }

        for (int val : nums)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, word;
        map<string, int> mp;
        getline(cin, s);
        stringstream ss(s);
        int max = 0;
        string max_word = "";

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > max)
            {
                max_word = word;
                max = mp[word];
            }
        }
        cout << max_word << " " << max << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, word;
    getline(cin, s);
    stringstream ss(s);
    map<string, int> name;

    while (ss >> word)
    {
        // cout << word << endl;
        name[word]++;
    }

    name.insert({"zihad", 300});

    cout << "emu appears " << name["emu"] << endl;
    cout << "emu appears " << name["zihad"] << endl;

    return 0;
}
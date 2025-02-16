#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    queue<string> line;
    while (t--)
    {
        int opt;
        cin >> opt;
        switch (opt)
        {
        case 0:
        {
            string people;
            cin >> people;
            line.push(people);
            break;
        }
        case 1:
        {
            if (line.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                string user = line.front();
                line.pop();
                cout << user << endl;
            }
            break;
        }
        }
    }
    return 0;
}
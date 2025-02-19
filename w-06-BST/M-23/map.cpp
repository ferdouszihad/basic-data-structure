#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> salami;
    salami["emu"] = 1000;
    salami["maisha"] = 100;
    salami["Mashfu"] = 0;

    // for (auto p : salami)
    // {
    //     cout << p.first << " ";
    //     cout << p.second << " Taka" << endl;
    // }

    // for (auto it = salami.begin(); it != salami.end(); it++)
    // {
    //     cout << it->first << " ";
    //     cout << it->second << " Taka" << endl;
    // }

    if (salami.count("mashfu"))
    {
        cout << salami["mashfu"] << " Taka" << endl;
    }
    else
    {
        cout << "Salami Deya hoynai" << endl;
    }

    return 0;
}
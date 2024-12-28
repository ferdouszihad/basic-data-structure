#include <bits/stdc++.h>
using namespace std;
void test(int *&p)
{
    cout << &p << endl;
}
int main()
{
    int x = 10;
    int *p = &x;

    test(p);
    cout << &p << endl;

    return 0;
}
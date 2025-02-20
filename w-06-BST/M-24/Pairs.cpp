#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
};
bool cmp(Student a, Student b)
{
    if (a.name == b.name)
    {
        return a.roll > b.roll;
    }

    return a.name < b.name;
}
int main()
{
    int n;
    cin >> n;
    Student std[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].name >> std[i].roll;
    }
    sort(std, std + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << std[i].name << " " << std[i].roll << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string n, int r, int m)
    {
        name = n;
        roll = r;
        marks = m;
    }
};
class Cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};
void printMark(Student a)
{

    cout << a.name << " ";
    cout << a.roll << " ";
    cout << a.marks << endl;
}
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, Cmp> result;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student newStudent(name, roll, marks);
        result.push(newStudent);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int opt;
        cin >> opt;
        switch (opt)
        {
        case 0:
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student newStudent(name, roll, marks);
            result.push(newStudent);
            printMark(result.top());
            break;
        }

        case 1:
        {
            if (result.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                printMark(result.top());
            }

            break;
        }

        case 2:
        {
            if (result.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                result.pop();
                if (result.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    printMark(result.top());
                }
            }

            break;
        }
        }
    }

    return 0;
}
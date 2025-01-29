#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;

    Node *next;

    Node(int val)
    {
        this->val = val;

        next = NULL;
    }
};
class MyQueue
{
    Node *head = NULL, *tail = NULL;

    int c = 0;

public:
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            c++;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        c++;
    }
    int size()
    {
        return c;
    }
    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        Node *toDelete = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        c--;
    }

    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    int front()
    {
        if (head == NULL)
            return 0;
        return head->val;
    }
    int back()
    {
        if (tail == NULL)
            return 0;
        return tail->val;
    }
};

int main()
{
    MyQueue q;

    string opt;
    while (cin >> opt)
    {
        if (opt == "in")
        {
            int num;
            cin >> num;
            q.push(num);
            cout << "size = " << q.size() << " | ";
            cout << "front = " << q.front() << " | ";
            cout << "back = " << q.back() << " | ";
            cout << endl;
        }
        else if (opt == "out")
        {
            if (q.empty())
            {
                cout << "Queuee is empty" << endl;
                continue;
            }
            cout << q.front() << " have left✈️" << endl;

            q.pop();
            cout << "size = " << q.size() << " | ";
            cout << "front = " << q.front() << " | ";
            cout << "back = " << q.back() << " | ";
            cout << endl;
        }
    }

    return 0;
}
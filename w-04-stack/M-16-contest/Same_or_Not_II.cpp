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
class MyStack
{
    Node *head = NULL;
    Node *tail = NULL;
    int c = 0;

public:
    void push(int val)
    {
        Node *newNode = new Node(val);
        c++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {

        if (head == NULL)
        {
            return;
        }
        c--;

        Node *toDelete = head;
        head = head->next;

        if (head == NULL)
        {
            tail == NULL;
        }
        delete toDelete;
    }
    int size()
    {
        return c;
    }
    bool empty()
    {
        return head == NULL;
    }

    int top()
    {
        if (c == 0)
            return 0;
        return head->val;
    }
};

class MyQueue
{
    Node *head = NULL;
    Node *tail = NULL;
    int c = 0;

public:
    void push(int val)
    {
        Node *newNode = new Node(val);
        c++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {

        if (head == NULL)
        {
            return;
        }
        c--;

        Node *toDelete = head;
        head = head->next;

        if (head == NULL)
        {
            tail == NULL;
        }
        delete toDelete;
    }
    int size()
    {
        return c;
    }
    bool empty()
    {
        return head == NULL;
    }

    int front()
    {
        if (c == 0)
            return 0;
        return head->val;
    }
};

int main()
{

    int n1, n2;
    cin >> n1 >> n2;
    MyStack st;
    MyQueue q;

    while (n1--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (n2--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES" << endl;
    return 0;
}
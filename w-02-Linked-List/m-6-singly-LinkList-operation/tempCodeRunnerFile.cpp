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
void insert_at_tail(Node *&head, Node *&tail, int &size, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        size++;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    size++;
}
void insert_at_head(Node *&head, Node *&tail, int &size, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        size++;
        return;
    }
    newNode->next = head;
    head = newNode;
    size++;
}
void insert_at(Node *&head, int &size, int pos, int val)
{
    int loopCount = pos - 1;
    Node *newNode = new Node(val);
    Node *curr = head;
    while (loopCount--)
    {
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    size++;
}
void print_List(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;
    int n;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        insert_at_tail(head, tail, size, n);
    }

    int pos, val;
    while (1)
    {
        cin >> pos >> val;
        if (pos == -1 & val == -1)
        {
            break;
        }

        if (pos == 0)
        {
            insert_at_head(head, tail, size, val);
            print_List(head);
        }
        else if (pos == size)
        {
            insert_at_tail(head, tail, size, val);
            print_List(head);
        }
        else if (pos > size)
        {
            cout << "invalid" << endl;
        }
        else
        {
            insert_at(head, size, pos, val);
            print_List(head);
        }
    }
    // print_List(head);

    return 0;
}
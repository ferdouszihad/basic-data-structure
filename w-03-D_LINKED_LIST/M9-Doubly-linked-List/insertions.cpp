#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
void print(Node *head, Node *tail)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << "--------------------" << endl;
    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl
         << "--------------------" << endl;
}
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void insertAt(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    pos = pos - 1;
    while (pos--)
    {
        tmp = tmp->next;
    }
    // cout << tmp->val << endl;
    newNode->prev = tmp;
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    while (cin >> n)
    {
        if (n == -1)
            break;
        insertAtTail(head, tail, n);
    }
    print(head, tail);
    int pos, val;
    cin >> pos >> val;
    insertAt(head, pos, val);
    print(head, tail);

    return 0;
}
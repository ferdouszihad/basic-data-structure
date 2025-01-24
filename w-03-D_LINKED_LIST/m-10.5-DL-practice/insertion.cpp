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
void insertAt(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    int prevIndex = pos - 1;
    while (prevIndex--)
    {
        tmp = tmp->next;
    }

    newNode->prev = tmp;
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}
void printList(Node *&head, Node *&tail)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
    cout << endl;
}
int sizeOf(Node *head)
{
    int c = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }
    return c;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cin >> n;

    while (n--)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            insertAtHead(head, tail, val);
            printList(head, tail);
        }
        else if (pos == sizeOf(head))
        {
            insertAtTail(head, tail, val);
            printList(head, tail);
        }
        else if (pos < sizeOf(head))
        {
            insertAt(head, pos, val);
            printList(head, tail);
        }
        else
        {
            cout << "invalid" << endl
                 << endl;
        }
    }

    return 0;
}
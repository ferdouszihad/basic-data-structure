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

void printList(Node *head, Node *tail)
{
    cout << "------------" << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << "------------" << endl;

    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl
         << "------------" << endl;
}

void revList(Node *head, Node *tail)
{
    cout << "started" << endl;
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        cout << "swaping " << i->val << " and  " << j->val << endl;
        swap(i->val, j->val);
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    while (cin >> n)
    {
        insertAtTail(head, tail, n);
    }
    revList(head, tail);
    printList(head, tail);

    return 0;
}
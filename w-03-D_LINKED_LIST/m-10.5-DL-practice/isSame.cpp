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
void printList(Node *&head, Node *&tail)
{
    cout << "~~~~~~~~~~~~~" << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    cout << "~~~~~~~~~~~~~" << endl;
    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
    cout << "~~~~~~~~~~~~~" << endl;
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
bool isSameList(Node *h1, Node *h2)
{

    if (sizeOf(h1) != sizeOf(h2))
    {
        return false;
    }
    for (Node *i = h1, *j = h2; i != NULL; i = i->next, j = j->next)
    {
        if (i->val != j->val)
            return false;
    }
    return true;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int n;

    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        insertAtTail(head1, tail1, n);
    }

    while (2)
    {
        cin >> n;
        if (n == -1)
            break;
        insertAtTail(head2, tail2, n);
    }

    if (isSameList(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
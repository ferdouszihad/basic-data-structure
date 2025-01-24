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

bool isPlaindrome(Node *h, Node *t)
{

    for (Node *i = h, *j = t; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        if (i->val != j->val)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;

    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        insertAtTail(head, tail, n);
    }

    if (isPlaindrome(head, tail))
    {
        printList(head, tail);
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
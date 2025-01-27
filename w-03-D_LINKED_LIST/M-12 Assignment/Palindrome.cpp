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
void printList(Node *h, Node *t)
{
    cout << endl;
    Node *tmp = h;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    tmp = t;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
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
bool isPalindrome(Node *&h, Node *&t)
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
    // printList(head, tail);
    isPalindrome(head, tail) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
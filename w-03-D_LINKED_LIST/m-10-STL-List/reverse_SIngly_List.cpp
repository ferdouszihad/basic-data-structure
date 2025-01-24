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
void printSList(Node *head)
{
    if (head == NULL)
    {

        return;
    }

    cout << head->val << " ";
    printSList(head->next);
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
    tail->next = newNode;
    tail = newNode;
}

void reverse(Node *&head, Node *&tail, Node *tmp)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
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
    reverse(head, tail, head);
    printSList(head);

    return 0;
}
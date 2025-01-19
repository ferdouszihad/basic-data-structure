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
void printList(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->val << endl;
    printList(head->next);
}

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        // printList(head);
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
bool isAvailable(Node *curr, int val)
{
    while (curr != NULL)
    {
        if (curr->val == val)
        {
            return true;
        }

        curr = curr->next;
    }
    return false;
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
        insert(head, tail, n);
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (isAvailable(temp->next, temp->val))
        {
            cout << "YES" << endl;
            return 0;
        }
        temp = temp->next;
    }
    cout << "NO" << endl;

    return 0;
}
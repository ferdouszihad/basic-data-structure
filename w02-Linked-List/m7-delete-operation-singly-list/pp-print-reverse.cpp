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
void insertion(Node *&head, Node *&tail, int val)
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
void print_List(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}
void print_rev_List(Node *curr)
{
    while (curr == NULL)
    {
        return;
    }
    print_rev_List(curr->next);
    cout << curr->val << " ";
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
        insertion(head, tail, n);
    }

    print_rev_List(head);

    return 0;
}
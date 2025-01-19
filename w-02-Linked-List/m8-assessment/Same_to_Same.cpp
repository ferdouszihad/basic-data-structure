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
void insertion(Node *&head, Node *&tail, int &size, int val)
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

bool isSame(Node *head1, Node *head2)
{
    for (Node *i = head1, *j = head2; i != NULL && j != NULL; i = i->next, j = j->next)
    {
        if (i->val != j->val)
            return false;
    }
    return true;
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int n, size1 = 0, size2 = 0;
    while (cin >> n)
    {
        if (n == -1)
            break;
        insertion(head1, tail1, size1, n);
    }
    while (cin >> n)
    {
        if (n == -1)
            break;
        insertion(head2, tail2, size2, n);
    }

    if (size1 != size2)
    {
        cout << "NO" << endl;
    }
    else if (isSame(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
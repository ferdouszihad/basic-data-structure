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
int sizeOf(Node *tmp)
{

    int size = 0;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

bool isSameSize(Node *head1, Node *head2)
{
    if (sizeOf(head1) == sizeOf(head2))
    {
        return true;
    }
    else
        return false;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int n;

    while (cin >> n)
    {
        if (n == -1)
            break;
        insertion(head1, tail1, n);
    }
    while (cin >> n)
    {
        if (n == -1)
            break;
        insertion(head2, tail2, n);
    }

    print_List(head1);
    print_List(head2);

    if (isSameSize(head1, head2))
    {

        cout << "Same Size => YES " << endl;
    }
    else
    {
        cout << "Same Size => NO " << endl;
    }

    return 0;
}
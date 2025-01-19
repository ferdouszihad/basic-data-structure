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

void removeDuplicate(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {

        for (Node *j = i; j->next != NULL;)
        {

            if (i->val == j->next->val)
            {

                Node *toDelete = j->next;

                j->next = j->next->next;
                // cout << "node changed & new list" << endl;
                delete toDelete;
                // print_List(head);
                // cout << "-------------------------" << endl;
            }
            else
            {

                j = j->next;
            }
        }
        if (i->next == NULL)
        {
            break;
        }
    }
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
    removeDuplicate(head);
    print_List(head);

    return 0;
}
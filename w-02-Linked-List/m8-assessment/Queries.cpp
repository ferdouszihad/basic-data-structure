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

void insert_at_head(Node *&head, Node *&tail, int &size, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        size++;
        return;
    }
    newNode->next = head;
    head = newNode;
    size++;
}
void insert_at_tail(Node *&head, Node *&tail, int &size, int val)
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
void delete_from_head(Node *&head, int &size)
{
    if (head == NULL)
    {
        return;
    }
    Node *toDelete = head;
    head = head->next;
    delete toDelete;
    size--;
}
void delete_from_tail(Node *&head, Node *&tail, int &size)
{
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    Node *toDelete = curr->next;
    curr->next = curr->next->next;
    delete toDelete;
    tail = curr;
    size--;
}
void delete_from(Node *&head, int &size, int pos)
{
    int loopCount = pos - 1;
    Node *curr = head;
    while (loopCount--)
    {
        curr = curr->next;
    }

    Node *toDelete = curr->next;
    curr->next = curr->next->next;
    delete toDelete;
    size--;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    int t;
    cin >> t;
    while (t--)
    {
        int opt, val;
        cin >> opt >> val;

        if (opt == 0)
        {
            insert_at_head(head, tail, size, val);
            print_List(head);
        }
        else if (opt == 1)
        {
            insert_at_tail(head, tail, size, val);
            print_List(head);
        }
        else if (opt == 2)
        {
            if (val == 0)
            {
                delete_from_head(head, size);
                print_List(head);
            }
            else if (val == size - 1)
            {
                delete_from_tail(head, tail, size);
                print_List(head);
            }
            else if (val < size - 1)
            {
                delete_from(head, size, val);
                print_List(head);
            }
            else
            {
                print_List(head);
            }
        }
    }

    return 0;
}
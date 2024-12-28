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

void deleteFromHead(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    Node *toDelete = head;
    head = head->next;
    delete toDelete;
}
void deleteFromPosition(Node *&head, int pos)
{
    int loopCount = pos - 1;
    Node *temp = head;
    while (loopCount--)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
void DeleteFromTail(Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        Node *toDelete = head;
        head = NULL;
        tail = NULL;
        delete toDelete;
        return;
    }
    Node *tmp = head;

    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    // cout << tmp->val << endl;
    Node *toDelete = tmp->next;
    tmp->next = NULL;
    delete toDelete;
    tail = tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    while (cin >> n)
    {
        insertion(head, tail, n);
    }
    print_List(head);
    DeleteFromTail(head, tail);
    print_List(head);
    DeleteFromTail(head, tail);
    print_List(head);
    DeleteFromTail(head, tail);
    print_List(head);
    DeleteFromTail(head, tail);
    print_List(head);

    return 0;
}
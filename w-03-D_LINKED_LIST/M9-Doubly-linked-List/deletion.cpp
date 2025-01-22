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
void print(Node *head, Node *tail)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << "--------------------" << endl;
    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl
         << "--------------------" << endl;
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
void deleteHead(Node *&head, Node *&tail)
{
    Node *toDelete = head;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }

    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete toDelete;
        return;
    }

    head->next->prev = NULL;
    head = head->next;
    delete toDelete;
}
void deleteTail(Node *&head, Node *&tail)
{
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    Node *toDelete = tail;
    tail = tail->prev;
    delete toDelete;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}
void deleteFrom(Node *&head, Node *&tail, int pos)
{
    if (pos == 0)
    {
        deleteHead(head, tail);
        return;
    }
    Node *tmp = head;
    while (pos--)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            return;
    }

    if (tmp->next == NULL)
    {
        deleteTail(head, tail);
        return;
    }

    // cout << tmp->val << endl;
    Node *toDelete = tmp;
    tmp->next->prev = tmp->prev;
    tmp->prev->next = tmp->next;
    delete toDelete;
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
    print(head, tail);
    deleteFrom(head, tail, 1);
    print(head, tail);

    return 0;
}
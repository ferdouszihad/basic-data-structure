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
void insertAtTail(Node *&head, Node *&tail, int val, int &size)
{
    Node *newNode = new Node(val);
    size++;
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
void insertAtHead(Node *&head, Node *&tail, int val, int &size)
{
    Node *newNode = new Node(val);
    size++;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void deleteHead(Node *&head, Node *&tail, int &size)
{
    size--;
    head = head->next;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void deleteTail(Node *&head, Node *&tail, int &size)
{
    size--;
    tail = tail->prev;
    tail->next = NULL;
}
void deleteAt(Node *&head, Node *&tail,int pos int &size)
{
    size--;
    tail = tail->prev;
    tail->next = NULL;
}

void printList(Node *head, Node *tail)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << "R -> ";

    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;
    int n;
    cin >> n;
    while (n--)
    {
        int pos, val;
        cin >> pos >> val;
        // cout << "----------------" << endl;
        // cout << pos << " " << val << endl;
        if (pos == 0)
        {
            insertAtHead(head, tail, val, size);
            printList(head, tail);
        }
        else if (pos == 1)
        {
            insertAtTail(head, tail, val, size);
            printList(head, tail);
        }
        else
        {
        }
        // cout << "----------------" << endl;
    }

    return 0;
}
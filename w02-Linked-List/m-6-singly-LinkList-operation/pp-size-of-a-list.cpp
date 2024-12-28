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

int size(Node *head)
{

    int size = 0;
    while (head != NULL)
    {
        head = head->next;
        size++;
    }
    return size;
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
    cout << "size is " << size(head) << endl;

    return 0;
}
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
int size_of_Linked_List(Node *head)
{

    int size = 0;
    while (head != NULL)
    {
        head = head->next;
        size++;
    }
    return size;
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
    int size = size_of_Linked_List(head);
    Node *temp = head;
    for (int i = 0; i < (size / 2) - 1; i++)
    {
        temp = temp->next;
    }

    if (size % 2 == 0)
    {

        cout << temp->val << " " << temp->next->val << endl;
    }
    else
    {
        cout << temp->next->val << endl;
    }

    return 0;
}
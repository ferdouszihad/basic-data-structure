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
void print_List_reverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    print_List_reverse(head->next);
    cout << head->val << endl;
}
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {

        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        // insert_at_head(head, val);
        head = newNode;
        tail = newNode;

        return;
    }
    tail->next = newNode;
    tail = newNode;
    // print_List(head);

    // Node *curr = head;
    // while (curr->next != NULL)
    // {
    //     curr = curr->next;
    // }
    // Node *newNode = new Node(val);
    // curr->next = newNode;
}

void insert_at_position_while(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);

    int loopCount = pos - 1; // ager position porjonto
    Node *curr = head;
    while (loopCount--)
    {

        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}

void insert_at_pos_for(Node *head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *curr = head;

    for (int i = 1; i < index; i++)
    {
        curr = curr->next;
    }
    // cout << curr->val << endl;
    newNode->next = curr->next;
    curr->next = newNode;
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

        insert_at_tail(head, tail, n);
    }

    print_List(head);
    print_List_reverse(head);

    return 0;
}
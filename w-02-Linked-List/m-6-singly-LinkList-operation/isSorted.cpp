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
void insert_at_tail(Node *&head, Node *&tail, int val)
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
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    while (cin >> n)
    {
        insert_at_tail(head, tail, n);
    }

    Node *temp = head;

    while (temp->next != NULL)
    {

        if (temp->val > temp->next->val)
        {

            cout << "NO" << endl;
            return 0;
        }
        temp = temp->next;
    }

    cout << "YES" << endl;

    return 0;
}
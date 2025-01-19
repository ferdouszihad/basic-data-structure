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
int search(Node *head, int val)
{

    int count_pos = 0;
    bool isFound = false;
    for (Node *i = head; i != NULL; i = i->next, count_pos++)
    {
        if (i->val == val)
        {
            isFound = true;
            break;
        }
    }
    if (isFound == true)
    {
        return count_pos;
    }
    else
    {
        return -1;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
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
        int val;
        cin >> val;

        cout << search(head, val) << endl;
        // print_List(head);
    }

    return 0;
}
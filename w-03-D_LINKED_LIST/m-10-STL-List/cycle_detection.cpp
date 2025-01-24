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
void printSList(Node *head)
{
    if (head == NULL)
    {

        return;
    }

    cout << head->val << " ";
    printSList(head->next);
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
        insertAtTail(head, tail, n);
    }
    tail->next = head->next->next;

    Node *slow = head;
    Node *fast = head;

    cout << "Slow = " << slow->val << endl;
    cout << "Fast = " << fast->val << endl;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == NULL)
        {
            break;
        }
        cout << "Slow = " << slow->val << endl;
        cout << "Fast = " << fast->val << endl;
        if (slow == fast)
        {
            cout << "Cycle Detected";
            return 0;
        }
    }
    printSList(head);

    return 0;
}
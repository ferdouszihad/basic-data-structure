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

int max_in_the_list(Node *head)
{
    if (head == NULL)
        return 0;
    int max = head->val;
    while (head != NULL)
    {
        if (max < head->val)
        {
            max = head->val;
        }
        head = head->next;
    }
    return max;
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
        insertion(head, tail, n);
    }

    cout << "MAx Value = " << max_in_the_list(head) << endl;

    return 0;
}
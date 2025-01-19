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
int get_max(Node *head)
{
    int max = head->val;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    return max;
}
int get_min(Node *head)
{
    int min = head->val;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    return min;
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
    // print_List(head);
    cout << get_max(head) - get_min(head) << endl;

    return 0;
}
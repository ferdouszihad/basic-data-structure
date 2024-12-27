// Singular Linked List initialization
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    Node *Head = NULL;
    Node *Curr = NULL;

    Node *tmp = Head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    return 0;
}
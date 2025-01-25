#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *prev;
    Node *next;

    Node(string val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
void insertAtTail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);

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
void printList(Node *head, Node *tail)
{
    cout << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

Node *accessSite(Node *head, string siteName)
{
    Node *site = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == siteName)
        {
            site = tmp;
            break;
        }
        tmp = tmp->next;
    }
    return site;
}
Node *accessPrevWebsite(Node *active)
{

    if (active->prev == NULL)
    {
        return active;
    }
    return active->prev;
}
Node *accessNextWebsite(Node *active)
{

    if (active->next == NULL)
    {
        return active;
    }
    return active->next;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string website;
    // taking input
    while (1)
    {
        cin >> website;
        if (website == "end")
        {

            break;
        }
        insertAtTail(head, tail, website);
    }

    // printList(head, tail);

    int n;
    cin >> n;
    Node *active = head;
    while (n--)
    {
        string option;
        cin >> option;
        if (option == "visit")
        {
            string siteName;
            cin >> siteName;

            Node *foundedSite = accessSite(head, siteName);
            if (foundedSite)
            {
                cout << foundedSite->val << endl;
                active = foundedSite;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (option == "prev")
        {
            Node *prevSite = accessPrevWebsite(active);
            if (active == prevSite)
            {
                cout << "Not Available" << endl;
            }
            else
            {

                active = prevSite;
                cout << active->val << endl;
            }
        }
        else if (option == "next")
        {
            Node *nextSite = accessNextWebsite(active);
            if (active == nextSite)
            {
                cout << "Not Available" << endl;
            }
            else
            {

                active = nextSite;
                cout << active->val << endl;
            }
        }
        // cout << "Current Active Site= " << active->val << endl;
    }

    return 0;
}
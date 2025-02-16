#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node *inputTree()
{
    Node *root = NULL;
    queue<Node *> q;
    int n;
    cin >> n;
    if (n != -1)
    {
        Node *newNode = new Node(n);
        root = newNode;
        q.push(root);
    }
    while (!q.empty())
    {
        // 1
        Node *f = q.front();
        q.pop();
        // 2

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            Node *newNode = new Node(l);
            f->left = newNode;
        }

        if (r != -1)
        {
            Node *newNode = new Node(r);
            f->right = newNode;
        }

        // 3
        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }

    return root;
}

void printTree(Node *root)
{
    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        //

        cout << f->val << " ";

        //
        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
    cout << endl;
}

vector<int> v;
void leafNodes(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->right == NULL && root->left == NULL)
    {
        v.push_back(root->val);
    }
    leafNodes(root->left);
    leafNodes(root->right);
}

int main()
{
    Node *root = inputTree();
    // printTree(root);

    leafNodes(root);

    sort(v.begin(), v.end(), greater<int>());

    for (int leaf : v)
    {
        cout << leaf << " ";
    }
    cout << endl;

    return 0;
}
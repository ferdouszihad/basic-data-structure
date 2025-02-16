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
int sumWithOutLeaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    int lsum = sumWithOutLeaf(root->left);
    int rsum = sumWithOutLeaf(root->right);

    return root->val + lsum + rsum;
}
int main()
{
    Node *root = inputTree();
    // printTree(root);

    cout<<sumWithOutLeaf(root)<<endl;

    return 0;
}
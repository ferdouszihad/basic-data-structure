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
        root = new Node(n);
        q.push(root);
    }

    while (!q.empty())
    {
        // ber kore ana
        Node *f = q.front();
        // pathai dilam ghana
        q.pop();

        // do some wild

        int leftVal, rightVal;
        cin >> leftVal >> rightVal;
        if (leftVal != -1)
        {
            Node *left = new Node(leftVal);
            f->left = left;
        }
        if (rightVal != -1)
        {
            Node *right = new Node(rightVal);
            f->right = right;
        }

        // now push the child

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }

    return root;
}
void printTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1
        Node *f = q.front();
        q.pop();

        // 2

        cout << f->val << " ";

        // 3
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    cout << endl;
}

int countNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = countNode(root->left);
    int r = countNode(root->right);

    return l + r + 1;
}

int countLeaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int leftLeaf = countLeaf(root->left);
    int rightLeaf = countLeaf(root->right);
    return leftLeaf + rightLeaf;
}
int maxHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int lHeight =  1 + maxHeight(root->left);
    int rHeight =  1 + maxHeight(root->right);

    if (lHeight > rHeight)
        return lHeight;
    else
        return rHeight;
}
int main()
{
    Node *root = inputTree();

    printTree(root);
    cout << "Total Node = " << countNode(root) << endl;
    cout << "Total Leaf = " << countLeaf(root) << endl;
    cout << "Maximum Height = " << maxHeight(root) << endl;

    return 0;
}
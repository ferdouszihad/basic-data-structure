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
        Node *f = q.front();
        q.pop();
        //

        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            Node *newL = new Node(l);
            f->left = newL;
        }
        if (r != -1)
        {
            Node *newR = new Node(r);
            f->right = newR;
        }

        //
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return root;
}
void printTree(Node *root)
{

    queue<pair<Node *, int>> q;
    int currLevel = 0;

    if (root != NULL)
    {

        q.push({root, 0});
    }

    while (!q.empty())
    {
        Node *f = q.front().first;
        int nodeLevel = q.front().second;
        q.pop();
        //

        if (currLevel == nodeLevel)
        {
            cout << f->val;
            cout << " ";
        }
        else
        {
            currLevel = nodeLevel;
            cout << endl;
            cout << f->val << " ";
        }

        //
        if (f->left)
        {
            q.push({f->left, nodeLevel + 1});
        }
        if (f->right)
        {
            q.push({f->right, nodeLevel + 1});
        }
    }
}

bool isInTree(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->val == val)
    {
        return true;
    }

    else if (root->val > val)
    {
        return isInTree(root->left, val);
    }
    else if (root->val < val)
    {
        return isInTree(root->right, val);
    }

    return false;
}

void insert(Node *&root, int val)
{
    if (root == NULL)
    {
        Node *newNode = new Node(val);
        root = newNode;
        return;
    }
    if (root->val > val)
    {
        if (root->left == NULL)
        {
            Node *newNode = new Node(val);
            root->left = newNode;
        }
        else
        {
            insert(root->left, val);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            Node *newNode = new Node(val);
            root->right = newNode;
        }
        else
        {
            insert(root->right, val);
        }
    }
}
Node *insertArrayToBST(int *arr, int low, int high)
{
    if (low > high)
    {
        return NULL;
    }
    int mid = (low + high) / 2;
    Node *root = new Node(arr[mid]);

    Node *l = insertArrayToBST(arr, low, mid - 1);
    Node *r = insertArrayToBST(arr, mid + 1, high);
    root->left = l;
    root->right = r;

    return;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    Node *root = insertArrayToBST(a, 0, n - 1);

    printTree(root);

    return 0;
}
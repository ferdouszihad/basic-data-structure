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

vector<int> getLevelData(Node *root, int level)
{

    queue<pair<Node *, int>> q;
    vector<int> v;
    if (root != NULL)
    {
        q.push({root, 0});
    }

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *f = q.front().first;
        int l = q.front().second;
        q.pop();

        if (level == l)
        {
            v.push_back(f->val);
        }

        if (f->left)
        {
            q.push({f->left, l + 1});
        }
        if (f->right)
        {
            q.push({f->right, l + 1});
        }
    }

    return v;
}

int main()
{
    Node *root = inputTree();
    int level;
    cin >> level;
    vector<int> v = getLevelData(root, level);

    if (v.empty())
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int data : v)
        {
            cout << data << " " ;
        }
        cout << endl;
    }

    return 0;
}
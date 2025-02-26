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
}
int main()
{
    // Node *nodeA = new Node(10);
    // Node *nodeB = new Node(20);
    // Node *nodeC = new Node(30);
    // Node *nodeD = new Node(40);
    // Node *nodeE = new Node(50);
    // Node *nodeF = new Node(60);
    // Node *nodeG = new Node(70);

    // nodeA->left = nodeB;
    // nodeA->right = nodeC;

    // nodeB->left = nodeD;
    // nodeB->right = nodeE;

    // nodeC->left = nodeF;
    // nodeC->right = nodeG;
    Node *root = inputTree();

    printTree(root);

    return 0;
}
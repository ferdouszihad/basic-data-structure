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
void printPreOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
void printInOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}
void printPostOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->val << " ";
}
int main()
{
    Node *nodeA = new Node(10);
    Node *nodeB = new Node(20);
    Node *nodeC = new Node(30);
    Node *nodeD = new Node(40);
    Node *nodeE = new Node(50);
    Node *nodeF = new Node(60);
    Node *nodeG = new Node(70);

    nodeA->left = nodeB;
    nodeA->right = nodeC;

    nodeB->left = nodeD;
    nodeB->right = nodeE;

    nodeC->left = nodeF;
    nodeC->right = nodeG;

    printPreOrder(nodeA);
    cout << endl;
    cout << endl;
    printInOrder(nodeA);
    cout << endl;
    cout << endl;
    printPostOrder(nodeA);

    return 0;
}
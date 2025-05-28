#include <iostream>
#include <vector>
#include <queue>
using namespace std;
static int idx = -1;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node *buildTree(vector<int> node)
{
    idx++;
    if (node[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(node[idx]);
    currNode->left = buildTree(node);  // for left sub tree
    currNode->right = buildTree(node); // for right sub tree
    return currNode;
}
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void levelOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << endl;
            if (q.empty())
            {
                break;
            }
            q.push(NULL);
        }
        else
        {
            cout << curr->data << " ";
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
    cout << endl;
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int currHeight = max(leftHeight, rightHeight) + 1;
    return currHeight;
}

int countNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftCount = countNode(root->left);
    int rightCount = countNode(root->right);

    return leftCount + rightCount + 1;
}
int sumofNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftSum = sumofNodes(root->left);
    int rightSum = sumofNodes(root->right);

    return leftSum + rightSum + root->data;
}
int main()
{
    vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(node);
    cout << "root = " << root->data << endl;
    cout << "Height of the tree is = " << height(root) << endl;
    cout << "Total no of Node is = " << countNode(root) << endl;
    cout << "Sum of Nodes is = " << sumofNodes(root) << endl;
    // preOrder(root);
    // inOrder(root);
    // postOrder(root);
    // levelOrder(root);
    return 0;
}
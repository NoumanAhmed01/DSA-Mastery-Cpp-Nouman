#include <iostream>
#include <vector>
using namespace std;

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

Node *insertVal(Node *root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    if (val < root->data)
    {
        root->left = insertVal(root->left, val);
    }
    else
    {
        root->right = insertVal(root->right, val);
    }
    return root;
}

Node *buildTree(int arr[], int n)
{
    Node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        root = insertVal(root, arr[i]);
    }
    return root;
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

Node *getInOrderSuccessor(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

Node *delNode(Node *root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    if (val < root->data)
    {
        root->left = delNode(root->left, val);
    }
    else if (val > root->data)
    {

        root->right = delNode(root->right, val);
    }
    // Case 1: 0 childern
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // Case 2: 1 childern
        if (root->left == NULL || root->right == NULL)
        {
            return root->left == NULL ? root->right : root->left;
        }
        // Case 3:
        Node *IS = getInOrderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right, IS->data);
        return root;
    }
}

void printPath(vector<int> path)
{
    cout << "Path = ";
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}

void pathHelper(Node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }

    path.push_back(root->data);

    if (root->left == NULL && root->right == NULL)
    {
        printPath(path);
        path.pop_back();
        return;
    }
    pathHelper(root->left, path);
    pathHelper(root->right, path);

    path.pop_back();
}

void rootToLeafPath(Node *root)
{
    vector<int> path;
    pathHelper(root, path);
}

int main()
{

    int arr[6] = {5, 1, 3, 4, 2, 7};
    int arr2[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

    Node *root = buildTree(arr2, 9);
    cout << "Original tree: ";
    inOrder(root);
    cout << endl;

    // root = delNode(root, 4);
    // cout << "After deleting 4: ";
    // inOrder(root);
    // cout << endl;

    // root = delNode(root, 5);
    // cout << "After deleting 5: ";
    // inOrder(root);
    // cout << endl;
    rootToLeafPath(root);
    return 0;
}
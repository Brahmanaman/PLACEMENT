#include <iostream>
#include <queue>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// creating tree
node *buildTree()
{

    // initially our root node is null
    node *root = NULL;

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree();
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree();
    return root;
}

// level order traversal
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (q.empty())
            {
                break;
            }
            else
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            // agr pop wale element k left m kuch pda h to
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            // agr pop wale element k right m kuch pda h to
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void buildFromLevOrder(node * &root)
{
    queue<node *> q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);

            cout << "Enter right node for: " << temp->data << endl;
            int rightData;
            cin >> rightData;
            if (rightData != -1)
            {
                temp->right = new node(rightData);
                q.push(temp->right);
            }
        }
    }
}

// inorder Traversal
void inorder(node *root)
{

    // basecase
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// preorder traversal
void preorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    // creating a Tree
    // node *root = buildTree();
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    node* root = NULL;
    buildFromLevOrder(root);

    levelOrderTraversal(root);

    // cout << "Inorder output: ";
    // inorder(root);

    // cout << endl;

    // cout << "preorder output: ";
    // preorder(root);

    // cout << endl;

    // cout << "postorder output: ";
    // postorder(root);

    return 0;
}
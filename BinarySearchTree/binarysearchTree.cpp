#include<iostream>
#include <queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* insertIntoBST (Node* root, int d) {
    //base case
    if( root == NULL) {
         root = new Node(d) ;
         return root;
    }
    if( d > root -> data) {
        //right part me insert karna h
         root->right = insertIntoBST(root->right, d);
    }
    else{
        //left part me insert karna h
         root->left = insertIntoBST(root->left, d);
    }
    return root;
}



void takeinput(Node* &root){
    int data;
    cin>>data;
    while (data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
    
}

// level order traversal
void levelOrderTraversal(Node *root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){

        Node *temp = q.front();

        q.pop();

        if (temp == NULL){
            cout << endl;
            if (q.empty()){
                break;
            }
            else{
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            // agr pop wale element k left m kuch pda h to
            if (temp->left != NULL){
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

// inorder Traversal
void inorder(Node* root){

    // basecase
    if (root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


Node* minval(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxval(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

int main()
{
    Node* root = NULL;

    cout<<"Enter data to create Bst"<<endl;
    takeinput(root);
    /** 
    // root = insertBST(root, 5);  // here inserting one element initially.
    // cout<<"root data: "<<root->data<<endl;
    // insertBST(root, 1);
    // insertBST(root, 3);
    // insertBST(root, 4);
    // insertBST(root, 2);
    // insertBST(root, 7); 10 8 21 7 27 5 4 3 -1
    **/
    cout<<"Printing BST"<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder: ";
    inorder(root);

    cout<<endl;

    cout<<"Min value "<< minval(root)->data;

    cout<<endl;

    cout<<"Max value "<< maxval(root)->data;
    

    return 0;
}
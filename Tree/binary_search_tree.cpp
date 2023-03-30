#include<iostream>
using namespace std;

//structure of node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

//function to create new node with given data and return pointer to it
Node* newNode(int data){
    Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
//function to insert new node in tree
Node* insertNode(Node* root, int data){

    if (root == NULL){
        return newNode(data);
    }

    if (data < root->data){
        root->left = insertNode(root->left, data);
    }
    else{
        root->right = insertNode(root->right, data);
    }
    return root;
}

// function to print leaf nodes of a binary search tree
void printLeafNodes(Node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
    } else {
        printLeafNodes(root->left);
        printLeafNodes(root->right);
    }
}

//function to traverse the tree in-order and print out data in each node
void inOrderTraversal(Node* root){

    if (root != NULL)
    {
        inOrderTraversal(root->left);
        cout << root->data << "  ";
        inOrderTraversal(root->right);
    }
}
//pre-order traversal
void preOrderTraversal(Node* root){

    if (root != NULL)
    {   
        cout << root->data << "  ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
//post-order traversal
void postOrderTraversal(Node* root){

    if (root != NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << "  ";
    }
}

int main()
{
    Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    cout << "\nIn-Order Traversal : \n";
    inOrderTraversal(root);
    cout << "\nPre-Order Traversal : \n";
    preOrderTraversal(root);
    cout << "\nPost-Order Traversal : \n";
    postOrderTraversal(root);
    cout << "\nLeaf Nodes : \n";
    printLeafNodes(root);
    return 0;
}



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void printLeafNodes(Node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
        return;
    }
    if (root->left != NULL) {
        printLeafNodes(root->left);
    }
    if (root->right != NULL) {
        printLeafNodes(root->right);
    }
}

int main() {
    Node* root = createNode(50);
    root->left = createNode(30);
    root->right = createNode(70);
    root->left->left = createNode(20);
    root->left->right = createNode(40);
    root->right->left = createNode(60);
    root->right->right = createNode(80);
    cout << "Leaf nodes of the BST: ";
    printLeafNodes(root);
    cout << endl;
    return 0;
}

#include<iostream>
#include<climits>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

void findSecondMin(Node* root, int& minVal, int& secondMin) {
    if(!root) return; // If tree is empty

    if(root->data < minVal) {
        secondMin = minVal;
        minVal = root->data;
    }
    else if(root->data < secondMin && root->data != minVal) {
        secondMin = root->data;
    }

    findSecondMin(root->left, minVal, secondMin);
    findSecondMin(root->right, minVal, secondMin);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    int minVal = root->data;
    int secondMin = INT_MAX;
    findSecondMin(root, minVal, secondMin);

    if(secondMin == INT_MAX) cout << "The second minimum value in the BST is not found.\n";
    else cout << "The second minimum value in the BST is: " << secondMin << endl;

    return 0;
}

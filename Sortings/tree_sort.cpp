//tree sort implementation
#include <iostream>
#include <vector>
using namespace std;

// definition of a binary search tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};

// insert a value into a binary search tree
void insert(TreeNode*& root, int val) {
    if (!root) {
        root = new TreeNode(val);
        return;
    }
    if (val < root->val) {
        insert(root->left, val);
    } else {
        insert(root->right, val);
    }
}

// in-order traversal of a binary search tree
void inorder(TreeNode* root, vector<int>& res) {
    if (root) {
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
}

// tree sort function
void treeSort(int arr[], int n) {
    TreeNode* root = NULL;
    for (int i = 0; i < n; i++) {
        insert(root, arr[i]);
    }
    vector<int> res;
    inorder(root, res);
    for (int i = 0; i < n; i++) {
        arr[i] = res[i];
    }
}

// function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main function
int main() {
    int arr[] = {52, 37, 2, 88, 6, 4, 16, 9, 69, 57, 43};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    treeSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

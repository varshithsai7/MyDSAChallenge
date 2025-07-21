#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// In-order traversal to detect swapped nodes
void inorder(TreeNode* root, TreeNode*& prev, TreeNode*& first, TreeNode*& second) {
    if (!root) return;

    inorder(root->left, prev, first, second);

    if (prev && prev->val > root->val) {
        if (!first) {
            first = prev;
        }
        second = root;
    }

    prev = root;

    inorder(root->right, prev, first, second);
}

void recoverTree(TreeNode* root) {
    TreeNode *first = NULL, *second = NULL, *prev = NULL;

    inorder(root, prev, first, second);

    if (first && second) {
        swap(first->val, second->val);
    }
}

// Helper to insert in BST (for testing)
TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

// In-order traversal for output
void printInorder(TreeNode* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    // Creating a BST manually with swapped nodes
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(10); // swapped
    root->right = new TreeNode(2); // swapped
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(12);

    cout << "Inorder before recover: ";
    printInorder(root);
    cout << endl;

    recoverTree(root);

    cout << "Inorder after recover: ";
    printInorder(root);
    cout << endl;

    return 0;
}

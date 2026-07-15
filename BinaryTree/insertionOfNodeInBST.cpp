#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int v) {
        val = v;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int value) {
    if (root == NULL)
        return new Node(value);

    if (value < root->val)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    inorder(root);
}

// write code to display right view of tree

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrderRightView(Node* root, vector<int>& ans1, int level) {
    if(root == NULL) return;

    if(level == ans1.size()) {
        ans1.push_back(root->val);
    }
    else {
        ans1[level] = root->val;
    }

    preOrderRightView(root->left, ans1, level + 1);
    preOrderRightView(root->right, ans1, level + 1);
}
void preOrderLeftView(Node* root, vector<int>& ans2, int level) {
    if(root == NULL) return;

    if(level == ans2.size()) {
        ans2.push_back(root->val);
    }
    else {
        ans2[level] = root->val;
    }

    preOrderRightView(root->right, ans2, level + 1);
    preOrderRightView(root->left, ans2, level + 1);
}


int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(45);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    e->left = h;

    vector<int> ans1;
    vector<int> ans2;
    preOrderRightView(a, ans1, 0);
    preOrderLeftView(a, ans2, 0);

    for(int i = 0; i < ans1.size(); i++) {
        cout << ans1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < ans1.size(); i++) {
        cout << ans2[i] << " ";
    }
}

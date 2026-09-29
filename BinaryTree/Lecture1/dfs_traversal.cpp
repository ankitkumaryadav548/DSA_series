#include <iostream>
using namespace std;

class Node{      //creation of tree
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){    //Constructor
        this->val = val;
        this-> left = NULL;
        this-> right = NULL;
    }
};

void preorder(Node* root){     // Preorder Displaying tree 
    if(root== NULL) return ;
    cout << root->val<< " ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(Node* root){     // Inorder Displaying tree 
    if(root== NULL) return ;
    Inorder(root->left);
    cout << root->val<< " ";
    Inorder(root->right);
}
void postorder(Node* root){     // postorder Displaying tree 
    if(root== NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout << root->val<< " ";
}

int main(){
    Node* a = new Node(1);     // creating node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;           // connection node to node 
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    preorder(a);
    cout << endl;
    Inorder(a);
    cout<< endl;
    postorder(a);
    cout << endl;
}


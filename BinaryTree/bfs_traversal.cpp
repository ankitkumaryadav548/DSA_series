#include <iostream>
#include <climits>
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

void nthLevel(Node* root,int current,int targetLevel){     
    if(root== NULL) return ;
    if(current==targetLevel) 
        cout << root->val<< " ";
    nthLevel(root->left,current+1,targetLevel);
    nthLevel(root->right,current+1,targetLevel);
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
    nthLevel(a,1,2);
    // cout << endl;
    // Inorder(a);
    // cout<< endl;
    // postorder(a);
    // cout << endl;
    
}
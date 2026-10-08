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

int level(Node* root){
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}

// reverse order level wise(from left to right)
void nthLevel(Node* root,int current,int targetLevel){     
    if(root== NULL) return ;
    if(current==targetLevel){
        cout << root->val<< " ";
        return;
    } 
    
    nthLevel(root->left,current+1,targetLevel);
    nthLevel(root->right,current+1,targetLevel);
}
// reverse order level wise(from right to left)
void nthLevelRev(Node* root,int current,int targetLevel){     
    if(root== NULL) return ;
    if(current==targetLevel){
        cout << root->val<< " ";
        return;
    } 
    
    nthLevelRev(root->right,current+1,targetLevel);
    nthLevelRev(root->left,current+1,targetLevel);
}

void levelOrder(Node* root){
    int n = level(root);
    for(int i=1;i<=n;i++){
        nthLevel(root, 1, i);
        cout << endl;
    }
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
    // nthLevel(a,1,3);
    
    //level order traversal
    // nthLevel(a,1,1);
    // nthLevel(a,1,2);
    // nthLevel(a,1,3);
    levelOrder(a); 
}


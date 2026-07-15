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

void displayTree(Node* root){     // Displaying tree 
    if(root== NULL) return ;
    displayTree(root->left);
    displayTree(root->right);
    cout << root->val<< " ";    
}
int sum(Node* root){              // Adding of node values = 28
    if(root==NULL) return 0;  //base 
    int ans = root->val + sum(root->left) + sum(root->right);
    return ans ;    
}    
int product(Node* root){
    if(root == NULL) return 0;
    return root->val * product(root->left) * product(root->right) ; 
}
int size(Node* root){            // Printing size of all node==7
    if(root==NULL) return 0;
    return  1 + size(root->left) + size(root->right);
}    

int maxInTree(Node* root){       // Find max of node in Tree
    if(root== NULL) return 0;
    int lmax = maxInTree(root->left);
    int rmax = maxInTree(root->right);
    return max(root->val,max(lmax,rmax));
}
int minInTree(Node* root){
    if(root==NULL)  return INT_MAX;  // if using INT_MAX then include header 
    int lmin = minInTree(root->left);//  #include <climits>
    int rmin = minInTree(root->right);
    return min(root->val, min(lmin,rmin));
}

int level(Node* root){          // level of tree
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right))  ;
}
int diameter(Node* root){     // Diamter means longest path covered from node
    if(root==NULL) return 0;
    return (1 + level(root->left) + level(root->right));
}
int height(Node* root){       // height = (level-1)
    if(root==NULL) return 0;
    return level(root->left) + level(root->right);
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
    displayTree(a);
    cout << endl;
    // cout << sum(a)<<endl;
    // cout << product(a)<< endl;
    // cout << size(a)<<endl;
    cout << maxInTree(a)<<endl;
    cout << minInTree(a)<<endl;
    // cout << level(a) << endl;
    // cout << diameter(a)<< endl; 
    // cout << height(a) << endl;

}
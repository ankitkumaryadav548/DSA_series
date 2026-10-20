//morris traversal 
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
//recursive traversal
void InOrder(Node* root){
    if(root == NULL) return ;
    InOrder(root->left);
    cout << root->val << " ";
    InOrder(root->right);
} 

// morris traversal 
void morris(Node* root){
    Node* curr = root;
    while(curr != NULL){
        if(curr->left != NULL){  // predecessor
            Node* pred = curr->left; 
            while(pred->right != NULL && pred->right != curr){
             pred  = pred->right;   
            }
            if(pred->right == NULL){   // LINK
                pred->right = curr;
                curr = curr->left;
            }
            else{  // if(pred->right != NULL)  //UNLINK
                pred->right = NULL;
                cout << curr->val << " ";
                curr = curr->right;
            }
        }
        
        else{  // if(curr->left == NULL)
            cout << curr->val << " ";
            curr = curr->right;
        }

    }
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g; 

    InOrder(a);
    cout << endl;
    morris(a);

}
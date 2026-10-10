
#include <iostream>
#include<stack>
#include<algorithm>
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

void PreOrderIterative(Node* root){
    stack<Node*>st;
    st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        cout << temp->val << " ";
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }

}
// void postOrderIterative(Node* root){
//     stack<Node*>st;
//     st.push(root);
//     while(st.size()>0){
//         Node* temp = st.top();
//         st.pop();
//         int a =  temp->val ;
//         if(temp->left!=NULL) st.push(temp->left);
//         if(temp->right!=NULL) st.push(temp->right);
//         int b = reverse(a.begin(),a.end());    
//         cout << b;
//         // error coming because reverse function is applicable for string and vector
//         // but here we are using int datatype but appraoch will be same 
//     }
// }



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
    //bfs using queue 
    PreOrderIterative(a);
    cout << endl;
    // postOrderIterative(a);
}



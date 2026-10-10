// we have to return all boundry node
//steps => 
//1. we will divide this question into 3 parts
//2. find left boundry nodes except leaf node
//3. find all leaf node from tree
//4. find right boundry nodes exept leaf node and in reverse order
// Remember=> left boundary top-down, leaves left-to-right, and right boundary bottom-up
#include <iostream>
#include <climits>
#include<queue>
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

Node* construct(int arr[], int n){    // construct
    queue<Node*>q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != INT_MIN ) l = new Node(arr[i]);
        else l = NULL ;
        if(j < n && arr[j]!=INT_MIN ) r = new Node(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i += 2;
        j += 2;
    }
    return root ;

}

void leftBoundry(Node* root){  // finding all left boundry node
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    cout << root -> val << " ";
    leftBoundry(root->left);
    if(root->left == NULL) leftBoundry(root->right);
}

void leafNode(Node* root){  // finding all leaf node
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)  cout << root -> val << " ";
    leafNode(root->left);
    leafNode(root->right);
}

void rightBoundry(Node* root){  // finding all left boundry node
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    rightBoundry(root->right);
    if(root->right == NULL) rightBoundry(root->left);
    cout << root -> val << " ";
}

int main(){
    int arr[] = {
1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, INT_MIN, 9, 10,
INT_MIN, 11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 15, 16,
INT_MIN, 17, INT_MIN, INT_MIN, 18, INT_MIN, 19, INT_MIN, INT_MIN,
20, 21, 22, 23, INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN, 28
};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr , n);
    leftBoundry(root);
    leafNode(root);
    rightBoundry(root->right);
}



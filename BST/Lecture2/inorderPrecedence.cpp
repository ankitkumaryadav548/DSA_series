// precedence and successor of node
// ex => 10 20 30 40 50 60
// if target is 30 then
// precedence = 20 and successor = 40
#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// M1 => brute force
void Inorder(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    Inorder(root->left, ans);
    // cout << root->val << " ";
    ans.push_back(root->val);
    Inorder(root->right, ans);
}
// M2 => using BST approach
// steps
// 1.go left once
// 2.keeping going right
Node *precedence(Node *root)
{
    if (root == NULL || root->left == NULL)
        return NULL;

    Node *pre = root->left;

    while (pre->right != NULL)
    {
        pre = pre->right;
    }

    return pre;
}
Node* successor(Node* root){
    if(root->right == NULL || root == NULL) return NULL;
    Node* succ = root->right;
    while(succ->left != NULL){
        succ = succ->left;
    }
    return succ ;
}
int main()
{
    Node *a = new Node(50);
    Node *b = new Node(40);
    Node *c = new Node(60);
    Node *d = new Node(30);
    Node *e = new Node(45);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    vector<int> ans;
    int target = 40;
    Inorder(a, ans);
    // int a;
    // for(int i=0;i<ans.size();i++){
    //     if(ans[i] == target){
    //         cout << ans[i-1];
    //         break;
    //     }
    // }
    Node *pre = precedence(a);

    if (pre != NULL)
    {
        cout << pre->val;
    }
    cout << endl;
    Node* succ = successor(a);
    if (succ != NULL)
    {
        cout << succ->val;
    }
    
}
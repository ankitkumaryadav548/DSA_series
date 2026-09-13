#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int val){
        this->val = val;
        this->prev = NULL ;
        this->next = NULL ;
    }
};

void display(Node* head){  // displaying ll => iterative way
    Node* temp = head;
    while(temp!=NULL){
     cout << temp->val << " ";
     temp = temp->next;   
    }
}
void displayRec(Node* head){  // displaying ll => recursive way
    if(head == NULL) return ;
    cout << head->val << " ";
    displayRec(head->next);
}
void displayRecRev(Node* head){  // displaying reverse ll => recursive way
    if(head == NULL) return ;
    displayRecRev(head->next);
    cout << head->val << " ";
}


int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;    
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a);   
    cout << endl;
    displayRec(a); 
    cout << endl;
    displayRecRev(a);
    cout << endl ;

}


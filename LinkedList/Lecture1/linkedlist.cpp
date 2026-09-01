#include<iostream>
using namespace std;
class Node{
    public: 
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL ;

    }
};

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next ;
    }
}

int size(Node* head){
    Node* temp = head ;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next ;
    }
    return n;
}

int sum(Node* head){
    int s = 0;
    while(head != NULL){
        s = s + head->val ;
        head = head -> next ;
    }
    return s;
}
int product(Node * head){
    int p = 1;
    Node * temp = head ;
    while( temp != NULL){
        p = p * temp->val ;
        temp = temp -> next;
    }
    return p ;
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
    display(a);
    cout << endl;
    cout << size(a) << endl;
    cout << sum(a) << endl;
    cout << product(a) << endl;
}


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

void displayRec(Node* head){   // T.C => 0(n)
    if(head == NULL) return ; // S.C => 0(n)
    cout << head->val << " " ;
    displayRec(head->next);
}

void display(Node* head){  //T.C => 0(n)
    Node* temp = head;     // S.C => 0(1)
    while(temp != NULL){   //iterative displaying of element is best then recursive
        cout << temp->val <<" ";
        temp = temp->next ;
    }
}

void displayReverse(Node* head){   // function call 
    if(head == NULL) return ; // base case
    displayReverse(head->next);  //call
    cout << head->val << " " ; //laam 
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

//insert at end
void insertAtend(Node* head, int val){
    Node* t = new Node(val);
    while(head->next != NULL){
        head = head ->next ;
    }
    head->next = t;
}

// void insertAtHead(int val){
//     Node* temp = new Node(val);
//     if(size==0) head = tail= temp;
//     else{
//         temp->next = head;
//         head = temp ;
//     }
//     size++ ;
// }
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
    display(a) ;
    cout << endl ;
    displayRec(a);
    cout << endl;
    displayReverse(a);
    cout << endl;
    cout << size(a) << endl;
    cout << sum(a) << endl;
    cout << product(a) << endl;
    cout << endl;
    insertAtend(a,80);  // inserting last of linked list
    display(a) ;
    // insertAtHead(a,50);
    cout << endl;
    display(a) ;
}

//for revision 
// write function  to dispaly , size , add, product 

// void display(Node* head){
//     Node *temp = head ;
//     while(temp != NULL){
//         cout << temp -> val << " ";
//         temp = temp -> next;
//     }
// }

// int size(Node* head){
//     Node* temp = head;
//     int n = 0;
//     while(temp != NULL){
//         n++ ;
//         temp = temp -> next ;
//     }
//     return n;
// }

// int (Node* head){
//     // Node* temp = head ;
//     int a = 0;
//     while(head != NULL){
//         a = a + head->val;
//         head = head ->next ;
//     }
//     return a ;
// }

// int product(Node *head){
//     int p = 1;
//     while(head != NULL){
//         p = p * head->val ;
//         head = head ->next;
//     }
//     return p;
// }

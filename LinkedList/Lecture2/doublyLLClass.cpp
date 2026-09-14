#include<iostream>
using namespace std;

class Node{   //user defined data type  => DDl
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DDL{  //user defined data structure
    public:
    Node* head  ;
    Node* tail  ;
    Node* prev ;
    int size ;
    DDL(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    //insertAtEnd
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp ;
        else{
            tail->next = temp ;
            temp->prev = tail ; // extra for DDL 
            tail = temp ;
        }
        size++ ;
    }

    void inserAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head ;
            head->prev = temp ; //extra 
            head = temp;
        }
        size++ ;
    }
    
    void insertAtIdx(int idx, int val){
        if(idx==0) inserAtHead(val);
        else if(idx == size) insertAtTail(val);
        else if(idx<0 || idx >size) cout << "Invalid index";
        else{
            Node* t = new Node(val);
            Node* temp = head ;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp ;  // extra =>  important for dll
            t->next->prev = t ; // extra
            size++ ;
        }
    }
    
    void deleteAtHead(){
        if(size == 0) cout << "List is empty";
        else{
            head = head->next ;
            if(head != NULL) head->prev = NULL ;  //extra
            if(head == NULL) tail = NULL ;  // extra
            size--;
        }
    }
    void deleteAtTail(){  // 0(1) best to do with doubly linked list
        if(size == 0) cout << "List is empty";
        else if(size == 1){ //extra
            deleteAtHead();
            return ;
        }
        else{
            Node* temp = tail->prev; // extra 
            temp->next = NULL ;  // extra
            tail = temp ;  // extra 
            size--;
        }
    }

    void deleteAtIdx(int idx){
        if(size == 0) {
            cout << "List is empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout << "Invalid Index " ;
            return ; 
        }
        else if(idx == 0) return deleteAtHead();
        else if(idx == size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; // extra
            size--;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>size) cout << "Invalid index";
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val ;
        else{
            if(idx<size/2){
                Node* temp = head;
                for(int i=1;i<=idx;i++){
                temp = temp->next;
                }
                return temp->val;
            }
            else{  // idx> size/2
                Node* temp = tail;
                for(int i=1;i<size-idx;i++){  // we are traversing from tail to 
                temp = temp->prev;            // decrease opertion 
                }
                return temp->val;
            }
        }

    }

    void display(){
        Node* temp = head ; 
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next ;
        }
        cout << endl;
    }

};

int main(){
    DDL ll ;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    // ll.display();
    ll.insertAtTail(40);
    ll.display();
    cout << ll.size << endl;
    // ll.inserAtHead(78);
    // ll.display();
    // cout << endl;
    // ll.insertAtIdx(2,44);
    // ll.display();
    // cout << endl;
    // ll.deleteAtHead();
    // ll.display();
    // cout << endl;
    // ll.deleteAtTail();
    ll.display();
    cout << endl;
    // ll.deleteAtIdx(2);
    ll.display();
    cout << ll.getAtIdx(3);
    // cout << endl;
    return 0;
}


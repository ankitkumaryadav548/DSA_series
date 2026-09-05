#include<iostream>
using namespace std;

class Node{   //user defined data type
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{  //user defined data structure
    public:
    Node* head  ;
    Node* tail  ;
    int size ;
    LinkedList(){
        head = NULL;
        tail = NULL ;
        size = 0;
    }
    //insertAtEnd
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp ;
        else{
            tail->next = temp ;
            tail = temp ;
        }
        size++ ;
    }

    void inserAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head ;
            head = temp;
        }
        size++ ;
    }
    void display(){
        Node* temp = head ; 
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next ;
        }
        cout << endl;
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
            size++ ;
        }
    }
    int getElementAtIdx(int idx){
        if(idx<0 || idx>size) cout << "Invalid index";
        else if(idx==0) return head->val;
        else if(idx==size) return tail->val ;
        else{
            Node* temp = head;
            for(int i=0;i<idx;i++){
                temp = temp->next;
            }
            // cout << temp->val;
            return temp->val;
        }

    }
    void deleteAtHead(){
        if(size == 0) cout << "List is empty";
        else{
            head = head->next ;
            size--;
        }
    }
    void deleteAtTail(){
        if(size == 0) cout << "List is empty";
        else{
            Node* temp = head;
           while(temp->next != tail){
               temp = temp->next ;
           }
           temp->next = NULL;
           tail = temp;
            size--;
        }
    }

    void deleteAtTail(){
        Node* temp = head;
    for(int i=1;i<size-1;i++){
        temp = temp->next;
    }
   tail = temp;
   tail->next = NULL ;
    size--;
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
            size--;
        }
    }

};

int main(){
    LinkedList ll ;
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
    // cout << ll.getElementAtIdx(3);
    // cout << endl;
    // ll.deleteAtHead();
    // ll.display();
    // cout << endl;
    ll.deleteAtTail();
    ll.display();
    cout << endl;
    // ll.deleteAtIdx(1);
    // ll.display();
    return 0;
}
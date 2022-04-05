#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        // cout << "memory is free for node with data " << value << endl;

    }
};


void InsertAtHead(Node* &head, int n){

    //create new node and insert at head
    Node* temp = new Node(n);
    temp->next = head;
    head = temp;
}


void InsertAtTail(Node* &tail, int n){

    //create new node and insert at tail
    Node* temp = new Node(n);
    tail->next = temp;
    tail = temp; // tail = temp; 
    
}

void printLinkedList(Node* &head){

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }

    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void InsertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        InsertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
}


void DeleteNode(int position, Node* & head, Node* & tail){

    //deleting first node
    if(position == 1){
        Node* temp = head;
        head = head->next; 
        // abb memory free krbnai pdegi, 
        //Humne heap memory ka use kra h to destructor se free krbnai pdegi manually 
        //hum nhi chyate jo node delete kr rhe h vo kisi ko point kre
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* current = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt<position){
            prev = current;
            current = current->next;
            cnt++;

        }
        if(current->next == NULL){
            tail = prev;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}


int main()
{
    Node* node1 = new Node(10);  // dynamically creating node
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head pointed to the node1
    Node* head = node1;

    //tail pointed to the node1 initially 
    Node* tail = node1;

    InsertAtTail(tail, 12);
    printLinkedList(head);

    InsertAtTail(tail, 15);
    printLinkedList(head);

    InsertAtPosition(tail, head, 4, 11);
    printLinkedList(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    DeleteNode(4, head, tail);
    printLinkedList(head);


    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;


   

    
    return 0;
}
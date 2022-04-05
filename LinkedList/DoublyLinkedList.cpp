#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    //desctructor
    ~Node(){
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

// traversing a linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;

}

//getting a length of linked list
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node* &head, Node* &tail, int n){

    //empty list
    if(head==NULL){
        Node* temp = new Node(n);
        head = temp;
        tail = temp; 
    }
    else{
        Node* temp = new Node(n);
        temp->next = head;
        head->prev = temp;
        head = temp;

    }
}

void InsertAtTail(Node* & head, Node* &tail, int n){


    if(tail == NULL){
        Node* temp = new Node(n);
        tail = temp;
        head = temp;

    }
    else{
        while(tail->next != NULL){ 
            tail = tail->next;
        }
        Node* newnode = new Node(n);
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;  
    }

    
}

void InsertAtPosition(Node* &head, Node* &tail, int pos, int n){
    //insert at Start
    if(pos == 1) {
        InsertAtHead(head, tail, n);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        InsertAtTail(head, tail, n);
        return ;
    }

    //creating a node for n
    Node* nodeToInsert = new Node(n);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}

int main()
{
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    // cout<<"Length of Linked List is: "<<getLength(head)<<endl;

    

    InsertAtHead(head, tail, 12);
    print(head);

    InsertAtHead(head, tail, 15);
    print(head);

    InsertAtTail(head, tail, 11);
    print(head);

    InsertAtTail(head, tail, 18);
    print(head);

    InsertAtPosition(head, tail, 3, 88);
    print(head);

    InsertAtPosition(head, tail, 6, 80);
    print(head);

    InsertAtPosition(head, tail, 1, 90);
    print(head);

    deleteNode(1, head);
    print(head);

    deleteNode(4, head);
    print(head);

    return 0;
} 
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    public:
    //constructor
    Node(){
        data = 0;
        next                            
    }

    //destructor
    ~Node()
    {
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

Node* head = NULL;

void push(int n){
    Node *temp = new Node();
    temp->data = n;
    temp->next = head;
    head = temp;
}

void pop(){
    if(head==NULL){
        cout<<"stack is empty!"<<endl;
    }
    else{
        Node * temp = head;
        head = head->next;
        temp->next=NULL;
        delete(temp);
    }
}

void peek(){
    if(head == NULL){
        cout<<"stack is empty!"<<endl;
    }
    else{
        cout<< "Element at the top: "<< head->data << endl;
    }
}

bool isempty(){
    if(head==NULL){
        return true;
    }
    else{
        return false;
    }
}

int main()
{

    push(1);
    peek();
    push(2);
    peek();
    push(3);
    peek();
    pop();
    peek();
    
    return 0;
}
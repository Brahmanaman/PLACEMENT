#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
   

    //constructor
    Node(int data){
        this->data = data;
        next = NULL;
    }

    //destructor function
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int element){
    
    Node* temp = new Node(element);
    if(front == NULL){
        front = rear = temp;
    }
    rear->next = temp;
    rear = rear->next;
}

void dequeue(){
    if(front == NULL){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        Node* temp = front;
        front = front->next;
        temp->next = NULL;
        delete(temp);

        //agr ekk hi element hai to special case
        if(front==NULL){
            rear = NULL;
        }

    }
}

void peek(){
    if(front == NULL){
        cout<<"Queue is empty!"<<endl;
    }
    else{ 
        cout<< "Peek element is "<<front->data<<endl;
    }
}

bool isempty(){
    if(front == NULL){
        return true;
    }
    else{
        return false;
    }
}

int main()
{

    enqueue(1);
    // enqueue(2);
    // enqueue(3);
    // enqueue(4);
    // peek();

    dequeue();
    peek();
    
    return 0;
}
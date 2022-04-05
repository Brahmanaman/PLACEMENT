#include<iostream>
using namespace std;

class Queue{
    
    public:
    int *arr;
    int front;
    int rear;
    int size;

    //constructor
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int element){
        if(rear == (size-1)){
            cout<<"queue is full";
        }
        else {
            if(front == -1){
                front = 0;
            }
            rear++;
            arr[rear] = element;
        }

    }

    void pop(){
        if(isempty()){
            cout<<"queue is empty"<<endl;
        }
        else{
            if(front == rear){ // last m pde hai
                front = rear = -1;
            }
            front++;
        }
    }

    void peek(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"front element is: "<<arr[front]<<endl;
            cout<<"last element is: "<<arr[rear]<<endl;
        }
    }

    bool isempty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void printQueue(){
        for(int i = front; i <= rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    Queue q(3);

    q.push(5);

    q.push(1);

    q.push(10);

    q.peek();

    q.pop();

    q.printQueue();

    return 0;
}
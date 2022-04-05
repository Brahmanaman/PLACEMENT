#include<iostream>
using namespace std;

class Stack{

    public:
    int *arr;
    int top;
    int size;

    //constructor function
    Stack(int n){
        this->size = n;
        top = - 1;
        arr = new int[n];
    }

    public:
    //push function
    void push(int element){

        if(top >= (size-1)){
            cout<<"Stack overflow"<<endl;
        }
        else{ 
            top++;
            arr[top] = element;
        }

    }

    //pop function
    void pop(){
        if(isempty()){ 
            cout<<"Stack underflow"<<endl;
        }
        else{ 
            top--;
        }

    }

    //peek or top function
    int peek(){
        if(isempty()){ 
            cout<<"Stack is empty! "<<endl;
            return -1;
        }else{
            return arr[top];
        }
    }

    //is empty function
    bool isempty(){
        if(top == -1){ 
            return true;
        }
        else{
            return false;
        }

    }
};


int main()
{
    Stack s(5);

    s.push(2);
    cout<<s.peek()<<endl;
    
    s.push(3);
    cout<<s.peek()<<endl;

    s.push(5);
    cout<<s.peek()<<endl;

    s.push(10);
    cout<<s.peek()<<endl;

    s.push(11);
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    if(s.isempty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{ cout<<"stack is not empty!"<<endl; }




    return 0;
}
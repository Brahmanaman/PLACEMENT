#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}


int main(){

    int arr[10] = {2,4,-9,7,1,8,6,-90,77,43};

    int key;
    cout << "Please enter the key to search : ";
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout<<"Congrats Key is found 😊";
    }
    else{
        cout<<"Oops! 😜 Key is not found";
    }

    return 0;
}
#include<iostream>
using namespace std;

void printArray(int arr[], int n ){
    cout << "Sorted Array is : ";
    for(int i = 0; i< n; i++){
        cout << arr[i] << ' ';
    }
}


void sorting(int arr[], int n){
    for(int i = 1; i < n; i++){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] >  arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            cout<<"Already Sorted!"<<endl;
            break;
        }
    }
}

int main(){

    // int arr[6] = {10,1,7,6,14,9};
    int arr[6] = {1, 6, 7, 9, 10, 14};
    sorting(arr, 6);
    printArray(arr, 6);
}
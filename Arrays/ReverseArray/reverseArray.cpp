#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
        
}

void printArray(int arr[], int n){
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}


int main(){

    int arr1[5] = {2,5,4,1,9};
    int arr2[10] = {2,4,3,0,7,1,2,6,99,75};
    reverseArray(arr1, 5);
    reverseArray(arr2, 10);
    printArray(arr1, 5);
    printArray(arr2, 10);
}
#include<iostream>
using namespace std;



void sorting(int arr[], int n){
    for(int i = 0; i<n-1 ;i ++){
        int min_element = i; 
        for(int j = i+1; j< n; j++){
            if(arr[min_element] > arr[j])
                min_element = j;
        }
        swap(arr[i], arr[min_element]);
    }
}

void printArray(int arr[], int n){
    cout << "Swapped Array is : ";
    for(int i =0; i < n; i++){
        cout << arr[i] << " "; 
    }
}


int main(){

    int arr[5] = {5, 2, 6, 9, 4};

    sorting(arr, 5);
    printArray(arr, 5);
    return 0;
}
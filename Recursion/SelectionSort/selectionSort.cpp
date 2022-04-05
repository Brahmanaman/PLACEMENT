#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i] << " ";
    }
}

void sorting(int *arr, int size, int idx){


    if(idx == size){
        return;
    }

    int minIdx = idx; // take curr idx element as smallest

    for(int i = 1; i < size; i++){
        if(arr[minIdx] > arr[i]) // found another smallest element than arr[smallestIdx]
            minIdx = i; // update the smallestIdx val
    }

    //place smallest element found at idx
    swap(arr[idx], arr[minIdx]);

    // one part Done recursion will do other work;
    sorting(arr+1 , size-1, idx);
}

int main()
{
    int arr[6] = {10,1,7,6,14,9};
    
    
    sorting(arr, 6, 0);
    printArray(arr, 6);
    

    
    return 0;
}
#include <iostream>
#include<vector>
using namespace std;

void rotateArray(int arr[], int size, int k){
    int e = size-1;
    
    for(int i =0; i< k; i++){
        cout<<"aman";
        int temp = arr[e];
        while(e > 0){
            arr[e] = arr[e-1];
            e = e-1;;
        }
        arr[0] = temp;
    }
}

int main() {
    int arr[] = {1,7,9,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    rotateArray(arr, n, k);
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
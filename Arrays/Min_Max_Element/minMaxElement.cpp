#include<iostream>
using namespace std;

int minElement(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int maxElement(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}




int main(){

    int arr[6] = {22,55,45,78,99,8};

    cout << "Minimum Element in a given array is: " << minElement(arr, 6) << endl;
    cout << "Maximum Element in an given array is: " << maxElement(arr, 6) << endl;

    return 0;
}
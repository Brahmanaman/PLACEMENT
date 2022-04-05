#include<iostream>
using namespace std;


int search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start < end){

        if(arr[mid] == key){
            return 1;
        }
        else{
            if(arr[mid] > key){
                end = mid - 1;
            }
            else{
                start = mid+1;
            }
            mid = start + (end - start)/2;
        }
    }
    return -1;
}


int main(){

    // Array should be in sorted array
    //Binary Search only applicable on sorted Array 
    int arr[5] = {3, 5, 9, 13, 27};
    int key;
    cout << "Enter the key is to search: ";
    cin >> key;

    int ans = search(arr, 5, key);

    if(ans == 1)
        cout<< " key is found ";
    else
        cout<< "key is not found ";

    return 0;
}
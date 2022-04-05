#include<iostream>
using namespace std;


bool binarysearch(int arr[], int start, int end, int key){

    int mid = start+(end-start)/2;
    //base condition
    if(start > end) return false;

    if(arr[mid] == key) return true;

    //recursive condition
    //go left
    if(arr[mid] < key){
        binarysearch(arr, mid+1, end, key);
    }
    else{
        binarysearch(arr, start, mid-1, key);
    }   
}

int main()
{
    int arr [5] = {1,2,3,4,5};
    int key;

    cout<<"Enter the key is to search: ";
    cin>>key;

    bool ans = binarysearch(arr, 0, 4, key);

    if(ans) {
        cout<<"Key Found"<<endl;
    }
    else {
        cout<<"Key not found"<<endl;
    }
    return 0;
}
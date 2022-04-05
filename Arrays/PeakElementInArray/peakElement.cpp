#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    int start =0;
    int end =size-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return arr[mid];
}
int main()
{
    int arr[100];
    int size;
    cout<<"Enter size of an Array: ";
    cin>> size;

    cout<<endl;

    cout<<"Enter Element in in array: ";
    for(int i =0; i< size; i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"Peak Element in an array is: " << peakElement(arr, size);
    return 0;
}
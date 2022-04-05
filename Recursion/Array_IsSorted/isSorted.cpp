#include<iostream>
using namespace std;


bool isSorted(int *arr, int size){

    //base condition
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]) return false;
    
    //recursive condition
    else{
        bool remaining_array = isSorted(arr+1, size-1);
        return remaining_array; 
    }
}

int main()
{
    int arr[6] = {1,2,3,9,5,6};

    bool ans = isSorted(arr, 6);

    cout << endl;

    if(ans) cout << "Array is Sorted" << endl;
    else cout << "Array is Not sorted" << endl;
    return 0;
}
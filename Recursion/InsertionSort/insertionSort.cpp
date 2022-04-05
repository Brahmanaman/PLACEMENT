#include<iostream>
using namespace std;


void sorting(int *arr, int n){

    //base case
    // When the elements are all over
    if (n <= 1)
        return;

    // sorting n-1 elements
    sorting(arr, n - 1);


    int temp = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && temp < arr[j]) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;

    
}

int main()
{
    int arr[6] = {10,1,7,6,14,9};
    sorting(arr, 6);

    for(int i = 0; i<6; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}


/*

insertionSortRecursive(int arr), int n)

            sort the first n-1 elements of the array,
            insertionSortRecursive(int arr), int n-1)
            then take the nth element of the array and insert it into the sorted n-1 elements
            at the appropriate position



            Now, let's implement our function for the current case
            The following function will sort the complete array
            insertionSortRecursive( arr, 6)

            insertionSortRecursive( arr, 6)
            insertionSortRecursive( arr, 5)l and insert 6th node in the sorted array
            insertionSortRecursive( arr, 4) and insert 5th node in the sorted array
            insertionSortRecursive( arr, 3)l and insert 4th node in the sorted array
            insertionSortRecursive( arr, 2) and insert 3rd node in the sorted array
            insertionSortRecursive( arr, 1) and insert 2nd node in the sorted array

            Now, we know that there's no sorting needed for a single element
            so this acts as our base case to stop recursive call

 */

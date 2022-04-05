#include<iostream>
#include<algorithm>
using namespace std;

void moveLeft(int arr[], int n ){
    int low =0;
    int high = n-1;
    while (low <= high)
    {
        if(arr[low] < 0){
            low++;
        }
        else if(arr[high] > 0){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i =0; i< n; i++){
        cout << arr[i] << " ";
    }
}
    

int main()
{
    int arr[] = {1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1};
      int n = sizeof(arr)/sizeof(arr[0]);

      moveLeft(arr, n);

      printArray(arr, n);

    return 0;
}
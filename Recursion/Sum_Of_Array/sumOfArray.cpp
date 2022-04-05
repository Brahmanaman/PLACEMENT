#include<iostream>
using namespace std;


int array_sum(int arr[], int size){

    //base condition
    if(size <= 0) return 0;

    //recursive conditions
    int sum = arr[0]+ array_sum(arr+1, size-1); 

    return sum;
}

int main()
{
    int arr[5] = {3,2,5,1,6};
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout << "Sum : " << array_sum(arr, n) << endl;

    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;


int find_kth_element(int arr[], int size, int k){
    sort(arr, arr+size);
    return arr[k-1];
}



int main()
{
    int arr[5] = {7, 10, 4, 3, 20};

    int k;
    cout <<"Enter kth Element : ";
    cin >> k;

    cout << k << " Element is : " << find_kth_element(arr, 5, k);
    return 0;
}
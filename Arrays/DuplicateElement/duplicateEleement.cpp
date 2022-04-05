
// condition :- element in an given array is btw 1 to n-1.

#include<iostream>
using namespace std;

int unique(int arr[], int n){

    int ans = 0;
    for(int i = 1;i <= n; i++){
        ans = ans ^arr[i];
    }

    for(int i = 1; i < n-1; i++){
        ans = ans^i;
    }

    return ans;
}

int main(){

    int arr[5] = {2,2,2,2,2};

    cout << endl;
    cout << "unique element in an given array is : " << unique(arr, 5) << endl;
   cout << endl;
    return 0;
}
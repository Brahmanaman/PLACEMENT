#include<iostream>
using namespace std;



int main(){

    int arr[5] = {11,22,33,44,55};

    int sum = 0;

    for (int i = 0; i < 5 ; i++){
        sum = sum + arr[i];
    }

    cout<<"Total sum of an Array: " << sum << endl;

    return 0;
}
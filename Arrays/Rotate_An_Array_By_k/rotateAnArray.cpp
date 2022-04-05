#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end){
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(vector<int>& arr, int size, int k){

    k = k % size;
    if(k < 0){
        k = k+size;
    }

    //part 1 ko reverse kro
    reverseArray(arr, 0, arr.size()-k-1);

    //part 2 ko reverse kro
    reverseArray(arr, arr.size()-k, arr.size()-1);
    
    //pure array ko reverse kro
    reverseArray(arr, 0, arr.size()-1);

}

int main()
{
    vector<int> arr = {1,7,9,11};
    int size = arr.size();
    rotateArray(arr, size, 101);
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}
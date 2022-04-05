#include<iostream>
#include<vector>
using namespace std;


void find_union(int arr1[], int arr2[], int m, int n){
    vector<int> v;

    int i =0, j =0;
    
    cout << endl;
    // when both arrays are of same size.
    while( i < m && j < n){

        if(arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            v.push_back(arr1[i]);
            i++;
        }

        else if (arr1[i] > arr2[j]){
            cout << arr2[j] << " ";
            v.push_back(arr2[j]);
            j++;
        }

        else{
            cout << arr1[i] << " ";
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // when len of first array is greater then second array
    while(i < m){
        cout << arr1[i] << " ";
        v.push_back(arr1[i]);
        i++;
    }
    
    // when len of sencond array is greater than first array
    while(j < n){
        cout << arr2[j] << " ";
        v.push_back(arr2[j]);
        j++;
    }

    cout << endl;

    cout<<"Resultant array: ";
    for(int i : v){
        cout << i << " ";
    }

    cout << endl;

}

int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    find_union(arr1, arr2, m, n);

    return 0;
}
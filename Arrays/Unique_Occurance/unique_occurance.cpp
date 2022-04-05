/**
 * Given an array of integers arr, return true if the number of 
 * occurrences of each value in the array is unique, 
 * or false otherwise.
 */

#include<iostream>
using namespace std;


bool  unique(int arr[] , int n){
        int b[1000] = {0};


    for(int i =0; i< n; i++){
        int count = 1;
        for(int j = i+1; j< n; j++){
            if(arr[i]==arr[j]){
                count++;
                b[j] = -1;
            }
        }

        if(b[i]!=-1){
            b[i] = count;
            cout<<count<<" ";
        }
    }
    cout<<endl;

    int ans = 0;
    int i = 0;
    while(i < n){
        if(b[i]==-1){
            i++;
        }
        else{
            for(int i=0; i< n; i++){
                for(int j = i+1; j<n; j++){

                    if(b[i] == -1){
                        i++;
                    }
                    // cout<<b[i] <<", " << b[j] << endl;
                    else if(b[i] == b[j]){ 

                        return 0;
                        break;
                    }
                }
            }
            i++;
            return 1;
        }
    }
}


int main(){

    int arr[2] = {1,2};

    cout<<"ans is : " << unique(arr, 2) <<endl;

   return 0;
}
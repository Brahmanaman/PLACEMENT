#include<iostream>
#include<vector>
using namespace std;

void sub(int idx, vector<int>& ds, int arr[], int size){

    //base case
    if(idx == size){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    
    // take or pick the particular index into the subsequence
    ds.push_back(arr[idx]);
    sub(idx+1, ds, arr, size);

    // not pick, or not take condition, this elemnt is not added to your subsequenc

    ds.pop_back();
    sub(idx+1, ds, arr, size);
}

int main(){
    int arr[3] = {1,2,3};
    int n = 3;
    vector<int> ds;
    sub(0, ds, arr, n);
    return 0;
}
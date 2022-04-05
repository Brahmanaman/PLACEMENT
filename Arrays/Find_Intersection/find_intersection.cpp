#include<iostream>
#include<vector>
using namespace std;


void find_intersection(int arr1[], int arr2[], int m, int n){
    vector<int> v;

    int i =0, j =0;
    
    cout << endl;
    // when both arrays are of same size.
    while( i < m && j < n){

        if(arr1[i] < arr2[j]){
            i++;
        }

        else if (arr1[i] > arr2[j]){
            j++;
        }

        else{
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    cout << endl;

    for(int i : v){
        cout << i << " ";
    }

    cout << endl;

}

int main()
{
    int arr1[] = { 2, 2};
    int arr2[] = { 2, 2};
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    find_intersection(arr1, arr2, m, n);

    return 0;
}


/**
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> myset(nums1.begin(), nums1.end());
        for(auto it: nums2){
            if(myset.count(it) > 0){
                ans.push_back(it);
                myset.erase(it); // taki kisi or k sath map na ho
            }
        }
        return ans;
    }
 **/
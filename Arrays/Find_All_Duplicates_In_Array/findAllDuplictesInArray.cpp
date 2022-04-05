#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void find_duplicates(vector<int> nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        // for(int i =0; i< nums.size()-1; i++){
        //     for(int j =i+1; j< nums.size(); j++){
        //         if(nums[i] == nums[j]){
        //             ans.push_back(nums[i]);
        //         }
        //     }
        // }

        int i = 0;
        while(i < (nums.size()-1)){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
                i++;
            }
            else{
                i++;
            }
        }
        
        for(int i =0; i< ans.size(); i++){
            cout<< ans[i] << " ";
        }
 
}



int main(){

    vector<int> arr;
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);

    find_duplicates(arr);

   
}
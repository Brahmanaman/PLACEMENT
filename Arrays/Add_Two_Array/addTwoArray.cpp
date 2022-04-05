#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int>ans;
    int i = n-1;
    int j = m-1;
    int carry = 0;
    while(i>=0 && j>=0){
        int sum = a[i] + b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i >=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
     while(j >=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum = sum%10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}

int main()
{
    vector<int> v1 = {4, 1};
    int n = v1.size();
    vector<int> v2 = {1, 2, 3, 4};
    int m = v2.size();
    vector<int> ans = findArraySum(v1,n, v2, m);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
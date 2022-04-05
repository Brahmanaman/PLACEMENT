#include<iostream>
using namespace std;

//Two Pointer Approach
bool isPalindrome(string &s, int i, int j){
    
    // base case
    if(i > j){
        return true;
    }

    // ekk case check kr loo 
    if(s[i] == s[j]){
        i++;
        j--;

        // baki kam recursion kr lega.
        isPalindrome(s, i, j);
    }
    else{
        return false;
    }

}

int main()
{
    string name = "aman";

    bool ans = isPalindrome(name,0, name.length()-1);

    if(ans){
        cout<<"Given String is Palindrome"<<endl;
    }
    else{
        cout<<"Given String is not Palindrome"<<endl;
    }

    return 0;
}
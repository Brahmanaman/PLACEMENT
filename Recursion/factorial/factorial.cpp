#include<iostream>
using namespace std;

// factorial using recursion
int fact(int n){

    //base condition
    if(n==0) return 1;

    // recursive call
    int ans = n * fact(n-1);
    // cout << n << " ";

    return ans;

}

// factorial using for loop;
void po (int n){
    cout << endl;
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans = ans * (n-i);
    }
    cout<<"Factorial of " << n << " is : " << ans;
}

int main()
{
    int n;
    cin>>n;
    cout << "Factorial of " << n << " is : "<< fact(n);
    po(n);
    return 0;
}
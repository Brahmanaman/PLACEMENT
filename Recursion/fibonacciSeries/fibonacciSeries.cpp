#include<iostream>
using namespace std;

int fibb(int n){

    //base condition
    if(n==0) return 0;
    if(n==1) return 1;

    //recursive condition
    int ans = fibb(n-1)+fibb(n-2);

    return ans;
}

int main()
{
    int n;
    cin>> n;

    cout << fibb(n);
    return 0;
}
#include<iostream>
using namespace std;

int square_root(int n){
    int s =0;
    int e = n;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s <= e){ 
        
        if((mid*mid) == n) 
        return mid;

        if( (mid*mid) > n){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
} 

double moreprecise(int n, int precision, int tempsol){ 
    double factor = 1;
    double ans = tempsol;
    for(int i = 0; i < precision; i++){
        factor = factor/10;
        for(double j = ans; j*j <= n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number to find sqrt ";
    cin>>n;
    int tempsol = square_root(n);
    cout <<"ans = " << moreprecise(n, 3, tempsol);
    return 0;
}
#include<iostream>
using namespace std;

// using recursion
int powr(int power){

    //base condition
    if(power==0) return 1;

    //reursive condition
    int ans = 2 * powr(power - 1);
    return ans;
}

// using for loop
void pow(int power){
    int result = 1 ;
    int no = 2;

    for(int i = 1; i <= power; i++){
        result = result * no;
    }
    cout<< endl;
    cout<< "Total : " << result;

}


int main()
{
    cout << "Total : "<< powr(4);
    pow(4);
    
    return 0;
}
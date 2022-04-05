#include<iostream>
using namespace std;

/**
*? This is done by using two pointer approach
**/

// void reverse(string &s, int i, int j){
    
//     if(i > j){
//         return ;
//     }

// //     eek case solve kr loo
//     swap(s[i], s[j]); 
//     i++; 
//     j--;

//     // abb sara kam recursion kr lega
//     reverse(s, i, j);
// }

/**
 * ? This is done by using single pointer approach
 */

void reverse(string& s, int i){

    int n = s.length();
    
    // base condition        
    if(i > (n-i-1)){            //n-i-1  This is a catch
        return ;
    }

    //     eek case solve kr loo
    swap(s[i], s[n-i-1]);
    i++;

    // abb sara kam recursion kr lega
    reverse(s, i);

}

int main()
{
    string name = "Aman";

    // reverse(name, 0, name.length() - 1);
    reverse(name, 0);

    cout<<name;

    return 0;
}
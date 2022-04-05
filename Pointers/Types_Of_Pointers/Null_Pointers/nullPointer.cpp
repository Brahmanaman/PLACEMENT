/**

1. Null Pointers:- A NULL pointer is a pointer that is pointing to nothing.
                   If we don’t have the address to be assigned to a pointer, we can use NULL.

Advantages of Null pointer are:-
1. We can initialize a pointer variable when that pointer variable is not assigned any actual memory address.
2. We can pass a null pointer to a function argument when we are unwilling to pass any actual memory address.

**/

#include <iostream>
using namespace std;
int main() {

    // Null Pointer 
    int * ptr = NULL; // *ptr = 0;
    cout << "The value of ptr is " << ptr;

    return 0;
}
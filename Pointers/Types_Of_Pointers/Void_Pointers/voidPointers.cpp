/**

A void pointer is a generic pointer; it has no associated type with it. 
A void pointer can hold an address of any type and can be typecasted to any type.
Thus we can use the void pointer to store the address of any variable.

 **/


#include <iostream>
using namespace std;
int main() {
    void * ptr;
    int i = 10;
    // assign int address to void
    ptr = & i;
    cout << "Address of variable i " << & i << endl;
    cout << "Address where the void pointer is pointing " << ptr <<  endl;
    return 0;
}

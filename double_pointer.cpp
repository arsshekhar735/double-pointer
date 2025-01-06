#include<iostream>  // Including the header file for input/output operations
using namespace std;  // Using the standard namespace to avoid prefixing "std::" with standard objects

int main() 
{
    int n = 10;  // Declaring an integer variable 'n' and initializing it to 10
    int *p = &n;  // Declaring a pointer 'p' and storing the address of 'n' in it

    cout << "The address of n is " << p << endl;  // Printing the address of 'n' using pointer 'p'

    int **ptr = &p;  // Declaring a pointer-to-pointer 'ptr' and storing the address of 'p' in it
    cout << "The address of p pointer is " << ptr << endl;  // Printing the address of the pointer 'p' using pointer-to-pointer 'ptr'

    *p = *p + 4;  // Dereferencing 'p' to access the value of 'n', adding 4 to it, and updating the value of 'n'
    cout << "The value of n after doing operation using *p " << n << endl;  // Printing the updated value of 'n'

    **ptr = **ptr + 10;  // Dereferencing 'ptr' twice to access the value of 'n' and adding 10 to it
    cout << "The value of n after doing operation with **ptr is " << n << endl;  // Printing the updated value of 'n'
}

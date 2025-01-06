#include<iostream>  // Including the header file for input/output operations
using namespace std;  // Using the standard namespace to avoid prefixing "std::" with standard objects

// Function definition to modify a pointer-to-pointer
void fun(int **p1) 
{
    *p1 = *p1 + 1;  // Dereferencing p1 and modifying the pointer it points to (move the pointer to the next memory address)
}

int main() 
{
    int n = 10;  // Declaring an integer variable 'n' and initializing it to 10
    int *ptr = &n;  // Declaring a pointer 'ptr' and storing the address of 'n' in it
    
    cout << "The address of n is " << ptr << endl;  // Printing the address of 'n' using pointer 'ptr'

    int **ptr1 = &ptr;  // Declaring a pointer-to-pointer 'ptr1' and storing the address of 'ptr' in it
    
    fun(ptr1);  // Passing the pointer-to-pointer 'ptr1' to the function 'fun', which modifies the address stored in 'ptr'

    cout << ptr1;  // Printing the modified value of 'ptr1' (the address it now points to after being changed in 'fun')
}

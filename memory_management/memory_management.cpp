#include<iostream>
using namespace std;

int main()
{
    //We will how to allocate the heap memory to the variable
    //By default the variable get stored in the stack memory.
    //Let suppose you have 4gb of RAM.
    //So the division of the memory take place like 8mb-16mb for stack and remaining for HEAP
    //If you have to make the arrray of 100000 size then it cannot be stored in the STACK.
    //What we will do that we will make pointer using new keyboard.
    //This new keyboard will activate the HEAP memory.
    //In the stack after the excution of the program/function/variable. 
    //Stack automatically realease the memory occupied by the program.
    //But in heap the memory could not delete by itself. 
    //We have to delete the memory using the DELETE Keyboard.
    int *ptr = new int;//here we used the heap memory using new keyboard
    cout<<ptr;//here we are printing the address of int. It means that where it stored in heap memory.
    //Now we will assign the value to ptr
    *ptr = 5;
    cout<<endl;
    cout<<*ptr;
}
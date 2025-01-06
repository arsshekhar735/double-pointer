#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int *p = &n;
    cout<<"The address of n is "<<p<<endl;
    int **ptr = &p;
    cout<<"The address of p pointer is "<<ptr<<endl; 
    *p = *p + 4;
    cout<<"The value of n after doing opration using *p "<<n<<endl;
    **ptr = **ptr + 10;
    cout<<"The value of n after doing operation with **ptr is "<<n<<endl;
}
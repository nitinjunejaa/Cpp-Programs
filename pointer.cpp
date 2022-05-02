#include<iostream>
using namespace std;
int main() {
    // What is Pointer?
    // --> It is variable data type is made to hold the data type of other elements
    int n=7;
    int* j=&n; // Here int* is varible which is denoted by j and has been assigned to store the (Address of n)*.
    // & --> is the adderess of the operator.
    cout<<"The address of n is: "<<&n<<endl;
    cout<<"The address of n is: "<<j<<endl;

    // *--> (value at)Dereference Operator
    cout<<"THe Value at address of n is: "<<*j<<endl;

    int** k=&j; // pointer to pointer--> This stores the address of a pointer.
    cout<<k<<endl;
    cout<<&j<<endl;
    cout<<"The value at address k is: "<<**k<<endl;



    return 0;
}
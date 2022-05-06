#include<iostream>
using namespace std;

// Function prototype
// type function-name (argument);       // Syntax

int multi(int a, int b);

int main() {    // Main ins a function which is entry point of the program.
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The Multiplication is "<<multi(num1, num2);
    return 0;   // This shows that we have successfully executed our program.
}
int multi(int n, int j) {
    int k = n*j;
    return k;
}    
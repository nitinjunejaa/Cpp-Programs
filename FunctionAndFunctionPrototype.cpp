#include<iostream>
using namespace std;

// Function prototype.
// type function-name (argument);       // Syntax

int multi(int a, int b);  // Here function prototype tells the compiler that a function with the name defined here will be used ahead in the program.
int multi(int, int); // This is also acceptable.
void f(void);

int main() {    // Main ins a function which is entry point of the program.
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The Multiplication is "<<multi(num1, num2);
    f();
    return 0;   // This shows that we have successfully executed our program.
}
int multi(int n, int j) {
    // Formal parameters n and j will taking values from actual parameters num1 and num2.
    int k = n*j;
    return k;
}    

void f(){
    cout<<"\nHellooo, Good Morning"<<endl;
}
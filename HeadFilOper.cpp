// In this only the basic operators are covered bitwise operator is not mentioned in this.
//  This is a program explaining ; header file and various operators in c++ 
// The results 1 and 0 imply to true and false
// There are 2 types of header files
// 1. System header file: it comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include<this.h> --> this will give error if the name of the user defined header file 
// is not present in the current directory in this case it is "this.h"
using namespace std;
int main()
{
    int a=3,b=7;
    cout<<"Here are some of the operators in C++"<<endl; 
    // Aritjmetic Oprerators
    cout<<"The Value of a+b is: "<<a+b<<endl; 
    cout<<"The Value of a-b is: "<<a-b<<endl; 
    cout<<"The Value of a*b is: "<<a*b<<endl; 
    cout<<"The Value of a/b is: "<<a/b<<endl; // When an Arithmetic operation is performed on any two integers in c++ 
    // the output will always be an integers, So here despite of  actual answer being 0.42 only 0 is displayed.
    cout<<"The Value of a%b is: "<<a%b<<endl; // Here % represents modulo.
    cout<<"The Value of a++ is: "<<a++<<endl; // Here first the existing value of "a" in the previous operation is printed 
    // then increment is performed
    cout<<"The Value of a-- is: "<<a--<<endl; // Here it is opposite of the above operation due to change in sign.
    cout<<"The Value of --a is: "<<--a<<endl; // This operation says that first decrement the value then print it so is the result of it.
    cout<<"The Value of ++a is: "<<++a<<endl; // Performed same way as the above except being increment.
    cout<<endl;

    // Assignment operators   -->> THese are used to assign values to variables 
    // int a=4, b=8;
    // char=n;

    // Comparison Operators  -->> These compare two  values 
    cout<<"Following are the comparison operators"<<endl;
    cout<<"The Value of a == b is "<<(a==b)<<endl;
    cout<<"The Value of a < b is "<<(a<b)<<endl;
    cout<<"The Value of a > b is "<<(a>b)<<endl;
    cout<<"The Value of a <= b is "<<(a<=b)<<endl;
    cout<<"The Value of a >= b is "<<(a>=b)<<endl;
    cout<<"The Value of a != b is "<<(a!=b)<<endl;

    // Logical operators
    cout<<"Following are the Logical operators"<<endl;
    cout<<"The Value of this logical and operator (a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl; // Both the conditions need to be true to diplay 1 as the output
    cout<<"The Value of this logical or operator (a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;  // Only one condition is required to be true for 1 as the output
    cout<<"The Value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;  // This operator will reverse the ooutput which is supposed to be displayed.
    
    // This was a litle about header files and some of the basic operators.
    return 0;
}
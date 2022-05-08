#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the value of num1: \n";       /* <<  this is insertion operator */
    cin>>num1;                                 /* >> this is an ecxtraction operatoer*/
    cout<<"Enter the value of num2: \n";       
    cin>>num2;                                 
    
    cout<<"The Multiplication is \t"<< num1*num2;

    return 0; 
}
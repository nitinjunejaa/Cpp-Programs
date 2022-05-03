// This code is written by Nitin Juneja, This this is a very simple code 
// printig array output using different ways.
#include<iostream>
using namespace std;
int main() {
    int marks[] = {56,89,74,820};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // Here you can change values of arrays after declaration and just before printing.
    // marks[3]=568;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

// Printing Array using For, while and do-while loop

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The Value of this array index "<<i<<" is "<<marks[i]<<endl;
    // }
    // int i=0;
    // while (i<4)         
    // {
    //     cout<<"the value is "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    //  do
    //  {
    //     cout<<"the value is "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    //  } while (i<4);
     
     // Pointers and arrays
     int* n = marks;
     cout<<*(n++)<<endl;
     cout<<*(++n)<<endl;
    //  cout<<"The Value of *p is "<<*n<<endl;
    //  cout<<"The Value of *(p+1) is "<<*(n+1)<<endl;
    //  cout<<"The Value of *(p+2) is "<<*(n+2)<<endl;
    //  cout<<"The Value of *(p+3) is "<<*(n+3)<<endl;

    return 0;
}
// This code is written by Nitin Juneja, This this is just a very simple code 
// printig array output, Might delete in a couple of days.



#include<iostream>
using namespace std;
int main() {
    int marks[] = {56,89,74,820};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // Here you can change values of arrays after declaration and just before printing.
    marks[3]=568;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    

    return 0;
}
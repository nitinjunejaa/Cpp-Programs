#include<iostream>
using namespace std;

int main () {
// Structure is a Data type consisting of multiple entities with different data types.
  
typedef struct Student
{
    int UID;
    char FavChar;
    float cgpa;
} ep;

// Struct body-->

    ep nitin;
    nitin.UID = 76;
    nitin.FavChar = 'j';
    nitin.cgpa = 8.39;
    cout<<"The Value of cgpa is "<<nitin.cgpa<<endl;
    cout<<"The Value of FavChar is "<<nitin.FavChar<<endl;
    cout<<"The Value of UID is "<<nitin.UID<<endl;

// Unioun
// Union is used for when you hav defined 3 differt entities for same data type but want to use just 1 at a time,
// Then it just allocates memeory pf one that may be for the one which has the maximum one and takes that into use as required.

union money // These here are just different forms of money defined, judt for reference.

{
    int rice;
    float rupees;
    char car;
};
// Unioun body -->

    union money m1;
    m1.rice = 65;
    m1.car = 'c'; 
    cout<<m1.car<<endl;


// Enum -->
    enum Languages {Cpp, java, Python, Kotlin, React, node_js};
    Languages L1 = Python;
    cout<<(L1==2)<<endl;
    cout<<Cpp<<endl;
    cout<<java<<endl;
    cout<<React<<endl;
    cout<<Kotlin<<endl;
    return 0;
}
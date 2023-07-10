// 1. Write a C++ program that shows the use of scope resolution operator
// ( :: variable-name )

#include<iostream>
using namespace std;
int m =10;  //global
int main()
{   
    int m = 20;
    {
        int k = m;
        int m = 30;

        cout << "We are in inner block.\n";
        cout << "k = " << k << "\n";
        cout << "m = " << m << "\n";
        cout << "::m = " << ::m << "\n";
    }
    cout << "\nWe are in outer block.\n";
    cout << "m = " << m << "\n";
    cout << "::m = " << ::m << "\n";

    return 0;
}
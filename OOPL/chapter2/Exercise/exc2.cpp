// 2. Write a program to read two numbers from the keyboard and display the 
// larger value on the screen

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two numbers : ";
    cin >> a >>b;
    cout << "Larger Value is : " << ((a>b) ? a : b) ;


    return 0;
}
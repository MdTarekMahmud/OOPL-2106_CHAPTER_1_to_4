// 4. Write a program to read the values of a, b and c and display the value of x, 
// where
//  x = a / b - c
//  Test your program for the following values:
// (a) a = 250, b = 85, c = 25
// (b) a = 300, b = 70, c = 70


#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float x;
    cout << "Enter Value of a,b and c : ";
    cin >> a >> b >> c;
    x =(float) a/b - c;
    cout << "The value of x = " << x << endl;
    return 0;
}
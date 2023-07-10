// 2. Write a C++ program that read two numbers from the keyboard and display 
// their average on the screen.
#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "Enter two number : ";
    cin >> a >> b;
    cout << "Average is : " << (a+b)/2;

    return 0;
}
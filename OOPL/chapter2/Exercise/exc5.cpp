// 5. Write a C++ program that will ask for a temperature in Fahrenheit and display 
// it in Celsius.
#include<iostream>
using namespace std;
int main()
{
    double fah,cel;
    cout << "Enter temperature in fahenheit :";
    cin >> fah;
    cel = (fah-32)*5/9;
    cout << "Temperature in celcius is : " << cel <<endl; 

    return 0;
}
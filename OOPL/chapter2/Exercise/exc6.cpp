// 5. Write a C++ program that will ask for a temperature in Fahrenheit and display 
// it in Celsius.
// 6. Redo Exercise 5 using a class called temp and member functions.
#include<iostream>
using namespace std;
class temp
{
    double fah,cel;
    public:
        void tempConverter(void);
};
void temp :: tempConverter(void){
    cout << "Enter temperature in fahenheit :";
    cin >> fah;
    cel = (fah-32)*5/9;
    cout << "Temperature in celcius is : " << cel <<endl; 
}
int main()
{
    temp temperature;
    temperature.tempConverter();
    return 0;
}
// 1. Write a function using reference variables as arguments to swap the values of 
// a pair of integers.
#include<iostream>
using namespace std;
void swap(int&, int&);
int main()
{
    int a, b;
    cout << "Enter the value of A and B : ";
    cin >> a >> b;
    cout << "Before swaping : ";
    cout << "A = " << a;
    cout << ", B = " << b;
    swap(a,b);
    cout << "\nAfter swaping : ";
    cout << "A = " << a;
    cout << ", B = " << b;
    return 0;
}
void swap(int &x , int &y){
    int temp=x;
    x=y;
    y=temp;
}
// 3. Write a program to print the following outputs using for loops
//  1
//  22 
//  333 
//  4444 
//  55555 
//  ………………
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}
// Write a program to read a matrix of size m x n from the keyboard and 
// display the same on the screen using functions
// 1. Write a function to read a matrix of size m x n from the keyboard
#include<iostream>
using namespace std;
int matrix(int,int);
int main()
{
    int m,n;
    cout << "Enter the value of m and n: ";
    cin >> m >> n;
    matrix(m,n);
    return 0;
}
int matrix(int m, int n){
    int matrx[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> matrx[i][j];
        }
    }
    cout << "Matrix is  : " << endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<  matrx[i][j]<< " ";
        }
        cout << endl;
    }
}

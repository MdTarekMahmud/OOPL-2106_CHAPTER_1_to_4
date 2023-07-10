// 1. Write a function to read a matrix of size m x n from the keyboard
#include<iostream>
using namespace std;
int readMatrix(int,int);
int main()
{
    int m,n;
    cout << "Enter the value of m and n: ";
    cin >> m >> n;
    readMatrix(m,n);
    return 0;
}
int readMatrix(int m, int n){
    int matrx[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> matrx[i][j];
        }
    }
}

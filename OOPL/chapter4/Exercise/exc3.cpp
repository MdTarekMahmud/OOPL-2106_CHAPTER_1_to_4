#include<iostream>
using namespace std;
int matrix(int x=3 ,int y);
int main()
{
    int n;
    cout << "Enter the value of column n: ";
    cin >> n;
    matrix(n);
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

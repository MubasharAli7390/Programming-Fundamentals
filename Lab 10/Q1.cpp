//Write a program that takes input from user for a 2-dimensional array based on for loop and prints the
//2D-array. Also, find the sum and multiplication of the elements of the 2D-array.
#include<iostream>
using namespace std;

int main() {
    int n,m,sum=0,mul=1;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
    int a[n][m];
    for(int i = 0; i <= n-1; i++){
        for (int j = 0; j<= m-1; j++){
            cout<<"Enter element at "<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>a[i][j];
            sum += a[i][j]; 
            mul *= a[i][j];
        }
    }
    for(int i = 0; i <= n-1; i++){
        for (int j = 0; j<= m-1; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of all elements: "<<sum<<endl;
    cout<<"multiplication of all elements: "<<mul;
}


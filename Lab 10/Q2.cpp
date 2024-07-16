/*
Write a program allows the user to enter the dimension or size of a 2D array and then its elements of the given size to store it in a 2D array arr[][] and print the array back on the output screen along with the index number (row and column number starting from 0). Output should be like following 2D-array.
*/
#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
    int arr[n][m];
    for(int i = 0; i <= n-1; i++){
        for (int j = 0; j<= m-1; j++){
            cout<<"Enter element at "<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"The Array is: "<<endl;
    for(int i = 0; i <= n-1; i++){
        for (int j = 0; j<= m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Elements with its index: "<<endl;
    for(int i = 0; i <= n-1; i++){
        for (int j = 0; j<= m-1; j++){
            cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
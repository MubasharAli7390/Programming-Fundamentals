//Write a program to calculate the sum and product of values stored in an array. You have to take input from the user, then display the stored values, and finally print the sum and product.
#include<iostream>
using namespace std;

int main() {
    int n,b,sum=0,product=1;
    cout<<"Enter the lenght of array: ";
    cin>>n;
    int A[n-1];
    for (int i = 0; i <= n-1; i++){
        cout<<"Enter Element: ";
        cin>>b;
        A[i] = b;
        sum += b;
        product *= b;
    }
    cout<<"Elements stored in the aray: "<<endl;
    for (int i = 0; i<= n-1; i++) {
        cout<<A[i]<<endl;
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Products: "<<product;
     
}
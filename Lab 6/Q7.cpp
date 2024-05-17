//Write a C++ program calculates and displays the sum of numbers entered by the user until the user enters 0 (zero) using While loop.
#include<iostream>
using namespace std;

int main() {
    int a,sum=0;
    cout<<"Enter a number: ";
    cin>>a;
    while (a != 0)
    {
        sum += a;
        cout<<"Enter a number: ";
        cin>>a; 
    }
    cout<<"sum: "<<sum;
    
}
/*
Write a program that reads two integers and output the result of following operation: 
    a. Addition 
    b. Subtraction 
    c. Division 
    d. Multiplication 
    e. Square
*/

#include <iostream>
using namespace std;

    int main() { 
        int a, b, add, sub, div, mul, sqA, sqB; 
        cout<<"Enter First Number: "; 
        cin>>a; 
        cout<<"Enter Second Number: "; 
        cin>>b; 
        add = a + b; 
        sub = a - b; 
        div = a / b;
        mul = a * b;
        sqA = a * a;
        sqB = b * b; 
        cout<<"Addiction: "<<add; 
        cout<<"\nSubtraction: "<<sub; 
        cout<<"\nDivision: "<<div; 
        cout<<"\nMultiplication: "<<mul; 
        cout<<"\nSquare of first Number: "<<sqA; 
        cout<<"\nSquare of Second Number: "<<sqB;
    }